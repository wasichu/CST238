#pragma once

#include <cassert>
#include <cstddef>

template <typename T>
class BTNode {
  public:
    T data;
    BTNode *left;
    BTNode *right;

    BTNode(T d) { data = d; left = right = NULL; }
    BTNode(T d, BTNode *l, BTNode *r) { data = d; left = l; right = r; }
};

template <typename T>
class BinaryTree {
  private:
    BTNode<T> *root;

    bool isBSTHelper(BTNode<T> *r) const;
    void maxHelper(BTNode<T> *r, T &m) const;
    void minHelper(BTNode<T> *r, T &m) const;

  public:
    BinaryTree() { root = NULL; }
    BinaryTree(BTNode<T> *r) { root = r; }

    bool empty() const { return root == NULL; }
    bool isBST() const;

    void max(T &m) const;
    void min(T &m) const;

    void setRoot(BTNode<T> *r) { root = r; }
};

// Method definitions
template <typename T>
bool BinaryTree<T>::isBST() const {
  return isBSTHelper(root);
}

template <typename T>
bool BinaryTree<T>::isBSTHelper(BTNode<T> *r) const {
  // NULL trees are by definition BSTs
  if (r == NULL) { return true; }

  // Your code here
  return true;
}

template <typename T>
void BinaryTree<T>::max(T &m) const {
  maxHelper(root, m);
}

template <typename T>
void BinaryTree<T>::maxHelper(BTNode<T> *r, T &m) const {
  // Don't allow this method to be 
  // called with a NULL pointer
  assert(r != NULL);

  // Your code here
}

template <typename T>
void BinaryTree<T>::min(T &m) const {
  minHelper(root, m);
}

template <typename T>
void BinaryTree<T>::minHelper(BTNode<T> *r, T &m) const {
  // Don't allow this method to be 
  // called with a NULL pointer
  assert(r != NULL);

  // Your code here
}
