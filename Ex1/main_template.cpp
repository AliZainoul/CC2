#include "full_template.hpp"
#include "symmetric_template.hpp"
#include "sum_template.hpp"
#include  <iostream>
using namespace std;

int main() {

  FullMtx<double> A(2);
  A(0,0) = 5; A(0,1) = 3; A(1,0) = 3; A(1,1) = 6;
  cout << "sum of full matrix A = " << sum<double>(A) << '\n';

  SymmetricMtx<int> S(2);   // just assign lower triangular part
  S(0,0) = 5; S(1,0) = 3; S(1,1) = 6;
  cout << "sum of symmetric matrix S = " << sum<int>(S) << '\n';

}
