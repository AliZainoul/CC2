#pragma once
#include "full.hpp"
#include "symmetric.hpp"

template <class T>
double sum(T & mat)
{
  double sum = 0.0;
  for (int i = 0; i < mat.dimn; i++)
  for (int j = 0; j < mat.dimn; j++)
  sum  += mat(i,j);
  return sum;
}
