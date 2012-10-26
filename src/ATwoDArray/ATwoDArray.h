#ifndef _ATWODARRAY_H
#define _ATWODARRAY_H

template <typename T>
class ATwoDArray {
  public:
    ATwoDArray<T>(int r, int c, T def);
    ~ATwoDArray<T>();

    void insert(int r, int c, T value);
    T access(int r, int c);
    void remove(int r, int c);

    void print();

    int getNumRows();
    int getNumCols();

  private:
    int num_rows_, num_cols_;
    T default_;
    T **array_;
};

#endif
