# Changes:
SyclMemoryModel.h:49, 429, 549

```
In file included from include_eigen.cpp:3:
In file included from eigen/Eigen/Core:176:
eigen/Eigen/src/Core/arch/Default/BFloat16.h:586:10: warning: comparison with infinity always evaluates to false in fast floating point modes [-Wtautological-constant-compare]
  return (isinf)(float(a));
         ^~~~~~~~~~~~~~~~~
eigen/Eigen/src/Core/arch/Default/BFloat16.h:594:10: warning: comparison with NaN always evaluates to false in fast floating point modes [-Wtautological-constant-compare]
  return (isnan)(float(a));
         ^~~~~~~~~~~~~~~~~
```
```
In file included from include_eigen.cpp:3:
In file included from eigen/Eigen/Core:170:
eigen/Eigen/src/Core/MathFunctions.h:1017:12: warning: comparison with NaN always evaluates to false in fast floating point modes [-Wtautological-constant-compare]
    return isnan EIGEN_NOT_A_MACRO (x);
           ^~~~~~~~~~~~~~~~~~~~~~~~~~~
eigen/Eigen/src/Core/MathFunctions.h:1368:87: note: in instantiation of function template specialization 'Eigen::internal::isnan_impl<float>' requested here
template<typename T> EIGEN_DEVICE_FUNC bool (isnan)   (const T &x) { return internal::isnan_impl(x); }
                                                                                      ^
eigen/Eigen/src/Core/arch/Default/BFloat16.h:351:15: note: in instantiation of function template specialization 'Eigen::numext::isnan<float>' requested here
  if (numext::isnan EIGEN_NOT_A_MACRO(v)) {
              ^
```
## deprecated 'global_buffer' -> use 'target::device' 
```
In file included from include_eigen.cpp:3:
In file included from eigen/Eigen/Core:239:
eigen/Eigen/src/Core/arch/SYCL/SyclMemoryModel.h:49:61: warning: 'global_buffer' is deprecated: use 'target::device' instead [-Wdeprecated-declarations]
const sycl_acc_target default_acc_target = sycl_acc_target::global_buffer;
                                                            ^
/cvmfs/projects.cern.ch/intelsw/oneAPI/linux/x86_64/2022/compiler/2022.1.0/linux/bin-llvm/../include/sycl/CL/sycl/access/access.hpp:18:17: note: 'global_buffer' has been explicitly marked deprecated here
  global_buffer __SYCL2020_DEPRECATED("use 'target::device' instead") = 2014,
                ^
/cvmfs/projects.cern.ch/intelsw/oneAPI/linux/x86_64/2022/compiler/2022.1.0/linux/bin-llvm/../include/sycl/CL/sycl/detail/defines_elementary.hpp:54:40: note: expanded from macro '__SYCL2020_DEPRECATED'
#define __SYCL2020_DEPRECATED(message) __SYCL_DEPRECATED(message)
                                       ^
/cvmfs/projects.cern.ch/intelsw/oneAPI/linux/x86_64/2022/compiler/2022.1.0/linux/bin-llvm/../include/sycl/CL/sycl/detail/defines_elementary.hpp:45:38: note: expanded from macro '__SYCL_DEPRECATED'
#define __SYCL_DEPRECATED(message) [[deprecated(message)]]
                                     ^
```
### Same warning at line 549 

## Deprecated 'get_count' -> use size() instead 

```
In file included from include_eigen.cpp:3:
In file included from eigen/Eigen/Core:239:
eigen/Eigen/src/Core/arch/SYCL/SyclMemoryModel.h:429:24: warning: 'get_count' is deprecated: get_count() is deprecated, please use size() instead [-Wdeprecated-declarations]
    size_t bufSize = b.get_count() * sizeof(buffer_data_type_t);
                       ^
eigen/Eigen/src/Core/arch/SYCL/SyclMemoryModel.h:331:12: note: in instantiation of function template specialization 'Eigen::TensorSycl::internal::PointerMapper::add_pointer_impl<sycl::buffer<unsigned char, 1, sycl::detail::aligned_allocator<char>, void>>' requested here
    return add_pointer_impl(b);
           ^
/cvmfs/projects.cern.ch/intelsw/oneAPI/linux/x86_64/2022/compiler/2022.1.0/linux/bin-llvm/../include/sycl/CL/sycl/buffer.hpp:365:3: note: 'get_count' has been explicitly marked deprecated here
  __SYCL2020_DEPRECATED("get_count() is deprecated, please use size() instead")
  ^
/cvmfs/projects.cern.ch/intelsw/oneAPI/linux/x86_64/2022/compiler/2022.1.0/linux/bin-llvm/../include/sycl/CL/sycl/detail/defines_elementary.hpp:54:40: note: expanded from macro '__SYCL2020_DEPRECATED'
#define __SYCL2020_DEPRECATED(message) __SYCL_DEPRECATED(message)
                                       ^
/cvmfs/projects.cern.ch/intelsw/oneAPI/linux/x86_64/2022/compiler/2022.1.0/linux/bin-llvm/../include/sycl/CL/sycl/detail/defines_elementary.hpp:45:38: note: expanded from macro '__SYCL_DEPRECATED'
#define __SYCL_DEPRECATED(message) [[deprecated(message)]]
                                     ^
```
