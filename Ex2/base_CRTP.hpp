#pragma once

template<class T>
class Mtx {    // base matrix

  private:
  // refer to derived class
  T& ReferToDerived()
  {
    return static_cast<T&>(*this);
  }

  // entry() uses features of derived class
  double& entry(int i, int j)
  {
    return ReferToDerived()(i,j);
  }

  protected:
  int dimn;           // dimension of square matrix (dimn x dimn)

  public:
  // Sum method for derived classes
  double sum()
  {
    double d = 0;
    for (int i = 0; i < dimn; i++)
    for (int j = 0; j < dimn; j++)
    d += entry(i,j);
    return d;
  }
};
