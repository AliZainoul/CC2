#pragma once
#include "sum_template.hpp"
template <class S>
class FullMtx {
  S** mx;

public:
  FullMtx(int n);

  int dimn;

  S & operator()(int i, int j);
};

// Implementation

template <class S>
FullMtx<S>::FullMtx(int n)
{
  dimn = n;
  mx = new S* [dimn];
  for (int i=0; i<dimn; i++) mx[i] = new S [dimn];
  for (int i=0; i<dimn; i++)
  for (int j=0; j<dimn; j++)  mx[i][j] = 0;              // initialization
}

template <class S>
S& FullMtx<S>::operator()(int i, int j) { return mx[i][j]; }
