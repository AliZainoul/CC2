#pragma once
#include "sum_template.hpp"
template <class T>
class SymmetricMtx {
  T** mx;

public:
  SymmetricMtx(int n);

  int dimn;

  T & operator()(int i, int j);
};

// Implementation

template <class T>
SymmetricMtx<T>::SymmetricMtx(int n)
{
  dimn = n;
  mx = new T* [dimn];
  for (int i=0; i < dimn; i++) mx[i] = new T [dimn];
  for (int i=0; i < dimn; i++)
  for (int j=0; j < i; j++) mx[i][j] = 0;
  // initialization of the lower triangular part
}

template <class T>
T& SymmetricMtx<T>::operator()(int i, int j) { return mx[i][j]; }
