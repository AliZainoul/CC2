#include "full_CRTP.hpp"
#include "symmetric_CRTP.hpp"
#include <iostream>


using namespace std;

int main() {

FullMtx A(2);
A(0,0) = 5; A(0,1) = 3; A(1,0) = 3; A(1,1) = 6;
std::cout << "sum of full matrix A = " << A.sum() << std::endl;

SymmetricMtx S(2);   // just assign lower triangular part
S(0,0) = 5; S(1,0) = 3; S(1,1) = 6;
std::cout << "sum of symmetric matrix S = " << S.sum() << std::endl;

}
