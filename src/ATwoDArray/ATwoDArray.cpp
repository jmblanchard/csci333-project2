#include "ATwoDArray.h"
#include <iostream>
#include <string>
#include <assert.h>

template <typename T>
ATwoDArray<T>::ATwoDArray(int r, int c, T def) {
    num_rows_ = r;
    num_cols_ = c;
    default_ = def;

    array_ = new T*[num_rows_];
    for (int i = 0; i < num_rows_; ++i) {
        array_[i] = new T[num_cols_];

        for (int j = 0; j < num_cols_; ++j) {
            array_[i][j] = default_;
        }
    }
}

template <typename T>
ATwoDArray<T>::~ATwoDArray() {
    for (int i = 0; i < getNumRows(); ++i) {
        delete[] array_[i];
    }

    delete[] array_;
}

template <typename T>
void ATwoDArray<T>::insert(int r, int c, T value) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());

    array_[r][c] = value;
}

template <typename T>
T ATwoDArray<T>::access(int r, int c) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());

    return array_[r][c];
}

template <typename T>
void ATwoDArray<T>::remove(int r, int c) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());

    array_[r][c] = default_;
}

template <typename T>
void ATwoDArray<T>::print() {
    for (int i = 0; i < getNumRows(); ++i) {
        std::cout << "[ ";
        for (int j = 0; j < getNumCols(); ++j) {
            std::cout << array_[i][j];
            if (j != getNumCols()-1)
                std::cout << ", ";
        }
        std::cout << " ]\n";
    }
}

template <typename T>
int ATwoDArray<T>::getNumRows() {
    return num_rows_;
}

template <typename T>
int ATwoDArray<T>::getNumCols() {
    return num_cols_;
}

template class ATwoDArray<int>;
template class ATwoDArray<double>;
template class ATwoDArray<std::string>;
