//dpcpp -fsycl -std=c++17 -Wall -I eigen -DEIGEN_DONT_PARALLELIZE -DEIGEN_USE_SYCL include_eigen.cpp -o include_eigen

#include <Eigen/Core>

int main(){
}


/*
ERROR:
In file included from include_eigen.cpp:3:
In file included from eigen/Eigen/Core:242:
eigen/Eigen/src/Core/arch/SYCL/PacketMath.h:156:1: error: call to member function 'load' is ambiguous
SYCL_PLOAD_SPECIAL(cl::sycl::cl_float4, u)
^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
eigen/Eigen/src/Core/arch/SYCL/PacketMath.h:150:18: note: expanded from macro 'SYCL_PLOAD_SPECIAL'
    res.template load<cl::sycl::access::address_space::private_space>(     \
    ~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/cvmfs/projects.cern.ch/intelsw/oneAPI/linux/x86_64/2022/compiler/2022.1.0/linux/bin-llvm/../include/sycl/CL/sycl/types.hpp:939:8: note: candidate function [with Space = sycl::access::address_space::private_space]
  void load(size_t Offset, multi_ptr<const DataT, Space> Ptr) {
       ^
/cvmfs/projects.cern.ch/intelsw/oneAPI/linux/x86_64/2022/compiler/2022.1.0/linux/bin-llvm/../include/sycl/CL/sycl/types.hpp:946:8: note: candidate function [with Space = sycl::access::address_space::private_space]
  void load(size_t Offset, multi_ptr<DataT, Space> Ptr) {

SOLUTION: construct a multi_ptr

Changes done to functions at lines ~130 and ~147
#define SYCL_PLOADT_RO_SPECIAL(packet_type, Alignment)                 \
  template <>                                                          \
  EIGEN_DEVICE_FUNC EIGEN_ALWAYS_INLINE packet_type                    \
  ploadt_ro<packet_type, Alignment>(                                   \
    const typename unpacket_traits<packet_type>::type* from) {       \
    typedef typename unpacket_traits<packet_type>::type scalar;        \
    typedef cl::sycl::multi_ptr< scalar, cl::sycl::access::address_space::private_space>  multi_ptr; \
    auto res = packet_type(static_cast<scalar>(0));                    \
    res.template load<cl::sycl::access::address_space::private_space>( \
        0, multi_ptr(const_cast<scalar*>(from)) );                                 \
    return res;                                                        \
  }

#define SYCL_PLOAD_SPECIAL(packet_type, alignment_type)                    \
  template <>                                                              \
  EIGEN_DEVICE_FUNC EIGEN_ALWAYS_INLINE packet_type pload##alignment_type( \
     const typename unpacket_traits<packet_type>::type* from) {           \
    typedef typename unpacket_traits<packet_type>::type scalar;            \
    typedef cl::sycl::multi_ptr< scalar, cl::sycl::access::address_space::private_space>  multi_ptr; \
    auto res = packet_type(static_cast<scalar>(0));                        \
    res.template load<cl::sycl::access::address_space::private_space>(     \
        0, multi_ptr(const_cast<scalar*>(from)));                                     \
    return res;                                                            \
  }

*/
