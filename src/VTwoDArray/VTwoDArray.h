#ifndef _VTWODARRAY_H
#define _VTWODARRAY_H

#include <vector>

template <typename T>
class VTwoDArray {
  public:
    VTwoDArray<T>(int r, int c, T def);
    ~VTwoDArray<T>();

    void insert(int r, int c, T value);
    T access(int r, int c);
    void remove(int r, int c);

    void print();

    int getNumRows();
    int getNumCols();

  private:
    int default_;
    int num_rows_, num_cols_;
    std::vector<std::vector<T>> array_;
};

#endif
