#include <CL/sycl.hpp>

using namespace sycl;

typedef unsigned long ulong;

#ifdef __SYCL_DEVICE_ONLY__
extern SYCL_EXTERNAL ulong __attribute__((overloadable)) intel_get_cycle_counter( void );
#endif

int main() {
 queue q(gpu_selector{});
 std::cout << "Device : " << q.get_device().get_info<info::device::name>() << std::endl;
 q.submit([&](handler &h) {
   auto out = stream(1024, 768, h);
   h.parallel_for(range<1>(100000), [=](auto i) { 
   out << "intel_get_cycle_counter: ";
   #ifdef __SYCL_DEVICE_ONLY__
   ulong cycle_counter = intel_get_cycle_counter();
   out << cycle_counter << endl;
   #endif
  });
 }).wait();
 std::cout << "Done" << std::endl;
 return 0; 
}
