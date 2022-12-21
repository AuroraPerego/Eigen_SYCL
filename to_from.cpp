//dpcpp -fsycl -std=c++17 -Wall -I eigen -DEIGEN_DONT_PARALLELIZE -DEIGEN_USE_SYCL to_from.cpp -o to_from

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
    chi2 = solver.eigenvalues().minCoeff(&min_index); //this is the line that causes the error, specifically the function minCoeff()
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
                auto p3D = Eigen::MatrixXd::Random(3, N);
              
                auto G  = Eigen::MatrixXd::Random(N, N);
                double renorm;
                renorm = G.sum();
                G *= 1. / renorm;
                auto X = p3D;
                auto A = X * G * X.transpose();
  
                double chi2;
                min_eigen3D(A, chi2);
      });
    });
}


/*
ERRORS:
In file included from to_from.cpp:3:
In file included from eigen/Eigen/Core:171:
eigen/Eigen/src/Core/GenericPacketMath.h:759:12: error: assigning to 'double' from incompatible type 'const sycl::vec<double, 2>'
{  (*to) = from; }
           ^~~~
eigen/Eigen/src/Core/GenericPacketMath.h:946:3: note: in instantiation of function template specialization 'Eigen::internal::pstoreu<double, sycl::vec<double, 2>>' requested here
  pstoreu<Scalar>(elements, a);
  ^
eigen/Eigen/src/Core/GenericPacketMath.h:983:10: note: in instantiation of function template specialization 'Eigen::internal::predux_helper<sycl::vec<double, 2>, (lambda at eigen/Eigen/src/Core/GenericPacketMath.h:983:27)>' requested here
  return predux_helper(a, EIGEN_BINARY_OP_NAN_PROPAGATION(Scalar, (pmin<NaNPropagation, Scalar>)));
         ^
eigen/Eigen/src/Core/Visitor.h:226:75: note: in instantiation of function template specialization 'Eigen::internal::predux_min<0, sycl::vec<double, 2>>' requested here
  static EIGEN_DEVICE_FUNC inline Scalar predux(const Packet& p) { return predux_min<NaNPropagation>(p);}
                                                                          ^
eigen/Eigen/src/Core/Visitor.h:256:32: note: in instantiation of member function 'Eigen::internal::minmax_compare<double, 0, true>::predux' requested here
    Scalar value = Comparator::predux(p);
                               ^
eigen/Eigen/src/Core/Visitor.h:103:19: note: in instantiation of member function 'Eigen::internal::minmax_coeff_visitor<Eigen::Matrix<double, 3, 1, 0>, true, 0>::packet' requested here
          visitor.packet(p, i, j);
                  ^
eigen/Eigen/src/Core/Visitor.h:195:101: note: in instantiation of member function 'Eigen::internal::visitor_impl<Eigen::internal::minmax_coeff_visitor<Eigen::Matrix<double, 3, 1, 0>, true, 0>, Eigen::internal::visitor_evaluator<Eigen::Matrix<double, 3, 1, 0>>, 3, true>::run' requested here
  return internal::visitor_impl<Visitor, ThisEvaluator, unroll ? int(SizeAtCompileTime) : Dynamic>::run(thisEval, visitor);
                                                                                                    ^
eigen/Eigen/src/Core/Visitor.h:397:9: note: in instantiation of function template specialization 'Eigen::DenseBase<Eigen::Matrix<double, 3, 1, 0>>::visit<Eigen::internal::minmax_coeff_visitor<Eigen::Matrix<double, 3, 1, 0>, true, 0>>' requested here
  this->visit(minVisitor);
        ^
eigen/Eigen/src/Core/DenseBase.h:485:14: note: in instantiation of function template specialization 'Eigen::DenseBase<Eigen::Matrix<double, 3, 1, 0>>::minCoeff<0, int>' requested here
      return minCoeff<PropagateFast>(index);
             ^
to_from.cpp:18:33: note: in instantiation of function template specialization 'Eigen::DenseBase<Eigen::Matrix<double, 3, 1, 0>>::minCoeff<int>' requested here
    chi2 = solver.eigenvalues().minCoeff(&min_index);
                                ^


In file included from to_from.cpp:3:
In file included from eigen/Eigen/Core:171:
eigen/Eigen/src/Core/GenericPacketMath.h:946:3: error: SYCL kernel cannot call an undefined function without SYCL_EXTERNAL attribute
  pstoreu<Scalar>(elements, a);
  ^
eigen/Eigen/src/Core/GenericPacketMath.h:758:74: note: 'pstoreu<double, sycl::vec<double, 2>>' declared here
template<typename Scalar, typename Packet> EIGEN_DEVICE_FUNC inline void pstoreu(Scalar* to, const Packet& from)
                                                                         ^
eigen/Eigen/src/Core/GenericPacketMath.h:942:1: note: called by 'predux_helper<sycl::vec<double, 2>, (lambda at eigen/Eigen/src/Core/GenericPacketMath.h:983:27)>'
predux_helper(const Packet& a, Op op) {
^
3 warnings and 2 errors generated.

SOLUTIONS:
- going from 'from' to 'from[0]'
eigen/Eigen/src/Core/GenericPacketMath.h:759:12: {  (*to) = from[0]; }
- Adding SYCL_EXTERNAL to the method 'pstoreu'
eigen/Eigen/src/Core/GenericPacketMath.h:946:3: pstoreu<Scalar>(elements, a);

*/
