// dpcpp computeDirect.cc -o cD -isystem eigen -DEIGEN_DONT_PARALLELIZE -DEIGEN_USE_SYCL -fsycl-enable-function-pointers -fsycl-targets=spir64_x86_64,spir64_gen -Xsycl-target-backend=spir64_gen "-device xe_hp_sdv"

// dpcpp computeDirect.cc -o cD -isystem eigen -DEIGEN_DONT_PARALLELIZE -DEIGEN_USE_SYCL -fsycl-targets=spir64_x86_64,spir64_gen -Xsycl-target-backend=spir64_gen "-device xe_hp_sdv"

#include <Eigen/Core>
#include <CL/sycl.hpp>
#include <Eigen/Eigenvalues>

template <int N>
using Matrix3xNd = Eigen::Matrix<double, 3, N>;
template <int N>
using MatrixNd = Eigen::Matrix<double, N, N>;

using Matrix3d = Eigen::Matrix3d;

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
    auto q = sycl::queue{sycl::gpu_selector()};
    q.submit([&](sycl::handler &cgh) {
        cgh.parallel_for(
          sycl::nd_range<1>(1, 1),
          [=](sycl::nd_item<1> item) {
                auto A = Eigen::MatrixXd::Random(3, 3);
                double chi2;
                auto v = min_eigen3D(A, chi2);
      });
    });
    std::cout << "done\n";
}
