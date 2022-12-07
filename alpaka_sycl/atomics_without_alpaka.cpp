#include <CL/sycl.hpp>
#include <iostream>

namespace hierarchy
{
    struct Blocks
    {};

    struct Threads
    {};
} // namespace hierarchy

template<typename THierarchy>
struct SyclMemoryScope
{};

template<>
struct SyclMemoryScope<hierarchy::Blocks>
{
    static constexpr auto value = sycl::memory_scope::device;
};

template<>
struct SyclMemoryScope<hierarchy::Threads>
{
    static constexpr auto value = sycl::memory_scope::work_group;
};

template<typename T, typename THierarchy>
using global_ref = sycl::atomic_ref<
    T,
    sycl::memory_order::relaxed,
    SyclMemoryScope<THierarchy>::value,
    sycl::access::address_space::global_space>;

template<typename T, typename THierarchy>
using local_ref = sycl::atomic_ref<
    T,
    sycl::memory_order::relaxed,
    SyclMemoryScope<THierarchy>::value,
    sycl::access::address_space::local_space>;

template<typename THierarchy, typename T>
inline auto callAtomicAdd(T* const addr, T value) 
{
    if(auto ptr = sycl::make_ptr<T, sycl::access::address_space::global_space>(addr); ptr != nullptr)
    {
        return global_ref<T, THierarchy>{*addr}.fetch_add(value);
    }
    else
    {
        return local_ref<T, THierarchy>{*addr}.fetch_add(value);
    }
}

void testAdd(int *a)
{
    for (int i = 0; i < 100 ; i++)
    {
       callAtomicAdd<hierarchy::Blocks, int>(&a[i], i);  
    }
}

int main() {
  sycl::queue queue = sycl::queue(sycl::gpu_selector());

  int *d_data, *h_data;
  h_data=(int *) malloc(100*sizeof(int));
  d_data = sycl::malloc_device<int>(100, queue);
  queue.memset(d_data, 0, 100 * sizeof(int)).wait();
  queue.parallel_for(
      sycl::nd_range<3>(sycl::range<3>(1, 1, 10), sycl::range<3>(1, 1, 10)),
      [=](sycl::nd_item<3> item) {
        testAdd(d_data);
      }).wait();
  printf("Success\n");
  return 0;
}
