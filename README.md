Steps to reproduce the error:
- ```git clone https://github.com/AuroraPerego/Eigen_SYCL.git```
- ```cd Eigen_SYCL```
- ```git clone https://gitlab.com/libeigen/eigen.git```
- ```dpcpp -fsycl -std=c++17 -Wall -isystem eigen -DEIGEN_DONT_PARALLELIZE -DEIGEN_USE_SYCL eigen_error.cc```
