Steps to reproduce the error:
- ```https://github.com/AuroraPerego/Eigen_SYCL.git```
- ```git clone https://gitlab.com/libeigen/eigen.git```
- ```dpcpp -fsycl -std=c++17 -Wall -isystem eigen -DEIGEN_DONT_PARALLELIZE -DEIGEN_USE_SYCL eigen_error.cc```
