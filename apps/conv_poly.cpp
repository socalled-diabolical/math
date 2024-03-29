#include <complex>
#include <iostream>
#include <vector>

#include "poly/poly.hpp"

using namespace math::poly;

int main() {
  std::vector<std::complex<double>> lst1{1, 2, 3, 4};
  std::vector<std::complex<double>> lst2{1, 2, 3};
  Polynomial<std::complex<double>> poly1(lst1);
  Polynomial<std::complex<double>> poly2(lst2);

  auto poly3 = poly1 + poly2;

  auto coefs = poly3.get_coef();

  auto poly_mul = poly1 * poly2;

  std::cout << poly_mul << std::endl;

  return 0;
}
