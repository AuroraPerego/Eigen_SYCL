### Get started:
- ```git clone https://github.com/AuroraPerego/Eigen_SYCL.git```
- ```cd Eigen_SYCL```
- ```git clone https://gitlab.com/libeigen/eigen.git```
- ```cd eigen```
- ```git reset --hard 34780d8bd13d0af0cf17a22789ef286e8512594d```
- source the dpcpp compiler

### List of files:
- ```include_eigen.cpp```: just including Eigen raised an error -> SOLVED
- ```to_from.cpp```: minCoeff doesn't work
- ```matrix_multiplication.cpp```: matrix multiplication fails inside kernel only with big matrices
- ```computeDirect.cc```: reproducer for the compiling error when using computeDirect from Eigen

The first line of each file is the command to compile the file. At the bottom there is the error and the proposed solution.

### Warning: deprecated
Some methods are deprecated and have been replaced, the list is in ```warnings.md```
