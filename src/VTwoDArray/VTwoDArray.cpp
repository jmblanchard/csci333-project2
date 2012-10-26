#include "VTwoDArray.h"
#include <iostream>
#include <string>
#include <assert.h>

template <typename T>
VTwoDArray<T>::VTwoDArray(int r, int c, T def) {
    default_ = def;
    num_rows_ = r;
    num_cols_ = c;

    std::vector<T> temp(num_cols_,default_);
    for (int i = 0; i < num_rows_; ++i) {
        array_.push_back(temp);
    }
}

template <typename T>
VTwoDArray<T>::~VTwoDArray() {
}

template <typename T>
void VTwoDArray<T>::insert(int r, int c, T value) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());

    array_[r][c] = value;
}

template <typename T>
T VTwoDArray<T>::access(int r, int c) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());

    return array_[r][c];
}

template <typename T>
void VTwoDArray<T>::remove(int r, int c) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());

    array_[r][c] = default_;
}

template <typename T>
void VTwoDArray<T>::print() {
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
int VTwoDArray<T>::getNumRows() {
    return num_rows_;
}

template <typename T>
int VTwoDArray<T>::getNumCols() {
    return num_cols_; 
}

template class VTwoDArray<int>;
template class VTwoDArray<double>;
template class VTwoDArray<std::string>;
