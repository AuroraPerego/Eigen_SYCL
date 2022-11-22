### Get started:
- ```git clone https://github.com/AuroraPerego/Eigen_SYCL.git```
- ```cd Eigen_SYCL```
- ```git clone https://gitlab.com/AuroraPerego/eigen.git```
- source the dpcpp compiler

### List of files:
- ```include_eigen.cpp```: just including Eigen raised an error -> SOLVED
- ```to_from.cpp```: minCoeff doesn't work
- ```matrix_multiplication.cpp```: matrix multiplication fails inside kernel only with big matrices
- ```computeDirect.cc```: reproducer for the compiling error when using computeDirect from Eigen
- ```atomics```: this folder contains three different versions of an atomicAdd test. Starting from a CUDA sample, we have the dpct automatic output and the equivalent implementation done without using dpct libraries. All the versions compile and run (using nvcc, dpcpp 2022.2.0 and the latest release of llvm) on various integrated graphics and NVIDIA GPUs. On ATS, depending on the data type and lenght of the array, some of the elements of the array are increased too many times. This issue seems to disappear when compiling ahead of time.

The first line of each file is the command to compile the file. At the bottom there is the error and the proposed solution.

### Warning: deprecated
Some methods are deprecated and have been replaced, the list is in ```warnings.md```
