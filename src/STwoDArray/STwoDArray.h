#ifndef _STWODARRAY_H
#define _STWODARRAY_H

#include "Node.h"

template <typename T>
class STwoDArray {
  public:
    STwoDArray(int r, int c, T def);
    ~STwoDArray();

    void insert(int r, int c, T value);
    T access(int r, int c);
    void remove(int r, int c);

    void print();

    int getNumRows();
    int getNumCols();

  private:
    int num_rows_, num_cols_;
    T default_;
    Node<T> **rows_;
    Node<T> **cols_;
};

#endif
