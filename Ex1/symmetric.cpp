#include "symmetric.hpp"
// Implementation

SymmetricMtx::SymmetricMtx(int n)
{
  dimn = n;
  mx = new double* [dimn];
  for (int i=0; i < dimn; i++) mx[i] = new double [dimn];
  for (int i=0; i < dimn; i++)
  for (int j=0; j < i; j++) mx[i][j] = 0;
  // initialization of the lower triangular part
}

double& SymmetricMtx::operator ()(int i, int j) { return mx[i][j]; }
