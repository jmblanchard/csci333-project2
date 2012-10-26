#include "STwoDArray.h"
#include <string>
#include <iostream>
#include <assert.h>

template <typename T>
STwoDArray<T>::STwoDArray(int r, int c, T def) {
    num_rows_ = r;
    num_cols_ = c;
    default_ = def;

    rows_ = new Node<T>*[num_rows_];
    cols_ = new Node<T>*[num_cols_];

    for (int i = 0; i < num_rows_; ++i) {
        rows_[i] = 0;
    }
    for (int i = 0; i < num_cols_; ++i) {
        cols_[i] = 0;
    }
}

template <typename T>
STwoDArray<T>::~STwoDArray() {
    delete[] rows_;
    delete[] cols_;
}

template <typename T>
void STwoDArray<T>::insert(int r, int c, T value) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());

    Node<T> *n = new Node<T>(r,c,value);
    Node<T> *curr_row_ele = rows_[r];
    Node<T> *curr_col_ele = cols_[c];

    // first lets insert into row element
    if (curr_row_ele == 0) {
        rows_[r] = n;
    } else if (curr_row_ele->getCol() > c) {
        n->setNextRow(curr_row_ele);
        rows_[r] = n;
    } else {
        while (curr_row_ele != 0 && curr_row_ele->getCol() < c
                && curr_row_ele->getNextRow() != 0
                && curr_row_ele->getNextRow()->getCol() < c) {
            curr_row_ele = curr_row_ele->getNextRow();
        }

        n->setNextRow(curr_row_ele->getNextRow());
        curr_row_ele->setNextRow(n);
    }

    // next insert into col element
    if (curr_col_ele == 0) {
        cols_[c] = n;
    } else if (curr_col_ele->getRow() > r) {
        n->setNextCol(curr_col_ele);
        cols_[c] = n;
    } else{
        while (curr_col_ele != 0 && curr_col_ele->getRow() < r
                && curr_col_ele->getNextCol() != 0
                && curr_col_ele->getNextCol()->getRow() < r) {
            curr_col_ele = curr_col_ele->getNextCol();
        }

        n->setNextCol(curr_col_ele->getNextCol());
        curr_col_ele->setNextCol(n);
    }
}

template <typename T>
T STwoDArray<T>::access(int r, int c) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());

    // If nothing exists in row or column, must be default
    if (rows_[r] == 0 || cols_[c] == 0)
        return default_;

    Node<T> *curr_row_ele = rows_[r];
    Node<T> *curr_col_ele = cols_[c];
    // Loop until we find our element
    while (curr_row_ele != 0 && curr_col_ele != 0
            && curr_col_ele->getRow() != r
            && curr_row_ele->getCol() != c) {
        curr_row_ele = curr_row_ele->getNextRow();
        curr_col_ele = curr_col_ele->getNextCol();
    }
    // determine which node is correct and return
    if (curr_row_ele != 0 && curr_row_ele->getCol() == c) {
        return curr_row_ele->getValue();
    } else {
        return curr_col_ele->getValue();
    }

    // should never get here but lets be safe I guess
    return default_;
}

template <typename T>
void STwoDArray<T>::remove(int r, int c) {
    assert(r >= 0 && r < getNumRows());
    assert(c >= 0 && c < getNumCols());
}

template <typename T>
void STwoDArray<T>::print() {
}

template <typename T>
int STwoDArray<T>::getNumRows() {
    return num_rows_;
}

template <typename T>
int STwoDArray<T>::getNumCols() {
    return num_cols_;
}

template class STwoDArray<int>;
template class STwoDArray<double>;
template class STwoDArray<std::string>;