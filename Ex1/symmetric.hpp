#pragma once

class SymmetricMtx {
  double** mx;

public:
  SymmetricMtx(int n);

  int dimn;

  double & operator()(int i, int j);
};
