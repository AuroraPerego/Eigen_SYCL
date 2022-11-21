#include <iostream>
#include <CL/sycl.hpp>

void kernel(sycl::stream out, sycl::nd_item<1> item){
  
  bool more = true;
  out << "thread_id "<< item.get_local_id(0) << " flag before is : " << more << "\n";
  while ( (item.barrier(),                                                            //item.get_sub_group() 
          (out << "predicate will evaluate to : " << (item.barrier(),sycl::any_of_group(item.get_group(), more)) << " \n"), 
                           //item.get_sub_group()
		  sycl::any_of_group(item.get_group(), more)) ) {
  
          more =false;
          out << "thread_id "<< item.get_local_id(0) << " flag inside is : " << more << "\n";
  }

  item.barrier();
  out << "thread_id "<< item.get_local_id(0) << " flag after is : " << more << "\n \n";

}

int main(int argc, char** argv){
    int threadsPerBlock = 256;
    int blocks = 1;
static const std::vector<sycl::device> devices = sycl::device::get_devices(sycl::info::device_type::all);

      std::cerr << "Found " << devices.size() << " SYCL devices:" << std::endl;
      for (auto const& device : devices)
        std::cerr << "  - " << device.get_backend() << ' ' << device.get_info<cl::sycl::info::device::name>() << " ["
                  << device.get_info<sycl::info::device::driver_version>() << "]" << std::endl;
      std::cerr << std::endl;
    auto stream = sycl::queue{devices[atoi(argv[1])]};
std::cerr << "stream offload to " << stream.get_device().get_backend() << ' ' << stream.get_device().get_info<cl::sycl::info::device::name>() << " ["
                  << stream.get_device().get_info<sycl::info::device::driver_version>() << "]" << std::endl;
    stream.submit([&](sycl::handler &cgh) {
      sycl::stream out(50000, 2048, cgh);
      cgh.parallel_for(
          sycl::nd_range<1>( blocks * threadsPerBlock, threadsPerBlock),
          [=](sycl::nd_item<1> item)[[intel::reqd_sub_group_size(32)]] {
            kernel(out, item);

      });
    });
}
