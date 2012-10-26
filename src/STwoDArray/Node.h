#ifndef _NODE_H
#define _NODE_H

template <typename T>
class Node {
  public:
    Node<T>(int r, int c, T val);
    ~Node<T>();

    T getValue();
    int getRow();
    int getCol();
    Node<T> *getNextRow();
    Node<T> *getNextCol();
    void setNextRow(Node<T> *n);
    void setNextCol(Node<T> *n);

  private:
    int row_, col_;
    T value_;
    Node<T> *next_row_;
    Node<T> *next_col_;
};

#endif
