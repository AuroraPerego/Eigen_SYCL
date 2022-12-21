#include "AtomicGenericSycl.h"

void testAdd(int* a, int* b){
  for (int i = 0; i < 100 ; i++)
    {
  	AtomicOp<int, hierarchy::Blocks>(&a[i], i);
  	//AtomicOp<int, hierarchy::Blocks>(&b[i], i);
    }
}

int main(){
  sycl::queue queue = sycl::queue(sycl::gpu_selector());

  int *d_data, *h_data;
  d_data = sycl::malloc_device<int>(100, queue);
  queue.memset(d_data, 0, 100 * sizeof(int)).wait();
  queue.parallel_for(
      sycl::nd_range<3>(sycl::range<3>(1, 1, 10), sycl::range<3>(1, 1, 10)),
      [=](sycl::nd_item<3> item) {
        auto bbuff = sycl::ext::oneapi::group_local_memory_for_overwrite<int[100]>(item.get_group());
        int* b = (int*)bbuff.get();
        testAdd(d_data, b);
      }).wait();
  printf("Success\n");
  return 0;


}

