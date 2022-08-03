//dpcpp -fsycl -std=c++17 -Wall -isystem eigen -DEIGEN_DONT_PARALLELIZE -DEIGEN_USE_SYCL eigen_error.cc

#include <cmath>
#include <Eigen/Core>

/**
 * fully inlined specialized code to perform the inversion of a
 * positive defined matrix of rank up to 6.
 *
 * adapted from ROOT::Math::CholeskyDecomp
 * originally by
 * @author Manuel Schiller
 * @date Aug 29 2008
 *
 *
 */
namespace math {
  namespace cholesky {

    template <typename M1, typename M2>
    inline constexpr void invert11(M1 const& src, M2& dst) {
      using F = decltype(src(0, 0));
      dst(0, 0) = F(1.0) / src(0, 0);
    }

  }  // namespace cholesky
}  // namespace math


