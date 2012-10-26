#include "Node.h"
#include <string>

template <typename T>
Node<T>::Node(int r, int c, T val) {
    row_ = r;
    col_ = c;
    value_ = val;
    next_row_ = 0;
    next_col_ = 0;
}

template <typename T>
Node<T>::~Node() {
}

template <typename T>
int Node<T>::getRow() {
    return row_;
}

template <typename T>
int Node<T>::getCol() {
    return col_;
}

template <typename T>
T Node<T>::getValue() {
    return value_;
}

template <typename T>
Node<T> *Node<T>::getNextRow() {
    return next_row_;
}

template <typename T>
Node<T> *Node<T>::getNextCol() {
    return next_col_;
}

template <typename T>
void Node<T>::setNextRow(Node<T> *n) {
    next_row_ = n;
}

template <typename T>
void Node<T>::setNextCol(Node<T> *n) {
    next_col_ = n;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;
