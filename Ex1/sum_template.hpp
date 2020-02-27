#pragma once
#include "full_template.hpp"
#include "symmetric_template.hpp"

template <class S, class T>
S sum(T & mat)
{
  S sum = 0.0;
  for (int i = 0; i < mat.dimn; i++)
  for (int j = 0; j < mat.dimn; j++)
  sum  += mat(i,j);
  return sum;
}
