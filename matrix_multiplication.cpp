//dpcpp -fsycl -std=c++17 -Wall -I eigen -DEIGEN_DONT_PARALLELIZE -DEIGEN_USE_SYCL matrix_multiplication.cpp -o matrix_multiplication

#include <Eigen/Core>
#include <CL/sycl.hpp>
#include <Eigen/Eigenvalues>

template <int N>
using Matrix2Nd = Eigen::Matrix<double, 2 * N, 2 * N>;
template <int N>
using Matrix3xNd = Eigen::Matrix<double, 3, N>;
template <int N>
using Vector2Nd = Eigen::Matrix<double, 2 * N, 1>;
template <int N>
using MatrixNd = Eigen::Matrix<double, N, N>;
template <int N>
using RowVector2Nd = Eigen::Matrix<double, 1, 2 * N>;

using Matrix3d = Eigen::Matrix3d;

template <typename T>
T sqr(T x) {
  return x * x;
}

inline Eigen::Vector3d min_eigen3D(const Matrix3d& A, double& chi2) {
    Eigen::SelfAdjointEigenSolver<Matrix3d> solver(3);
    solver.computeDirect(A);
    int min_index = 0;
    chi2 = solver.eigenvalues().minCoeff(&min_index); 
    return solver.eigenvectors().col(min_index);
  }

int main(){
    const int N = 4;
    // INITIALIZATION

    auto q = sycl::queue{sycl::cpu_selector()};
    q.submit([&](sycl::handler &cgh) {
      cgh.parallel_for(
          sycl::nd_range<1>(1, 1),
          [=](sycl::nd_item<1> item) {
                Matrix2Nd<N> V = Eigen::MatrixXd::Random(2 * N, 2 * N);
                Matrix3xNd<N> p3D = Eigen::MatrixXd::Random(3, N);
                Vector2Nd<N> mc;  
                mc << p3D.row(0).transpose(), p3D.row(1).transpose();

                //Comment the following three lines to solve the error
                Eigen::Matrix<double, 1, 1> cm;
                cm = mc.transpose() * V * mc;
                const double c = cm(0, 0);
                
                //and uncomment these two lines
                //auto tmp = mc.transpose().lazyProduct(V);
                //double a = tmp * mc;

      });
    });
}


/*
ERROR:
error: Invalid record (Producer: 'Intel.oneAPI.DPCPP.Compiler_2022.1.0' Reader: 'Intel.oneAPI.DPCPP.Compiler_2022.1.0')
dpcpp: error: sycl-link command failed with exit code 1 (use -v to see invocation)

It occurs only with N>3!
*/