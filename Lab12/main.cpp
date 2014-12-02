#include <cassert>
#include <iostream>
#include <vector>

#include "BinTree.h"

int main() {
  // Building the trees from 
  // Lecture 22 slide 5
  BTNode<int> n1(1);
  BTNode<int> n2(3);
  BTNode<int> n3(6);
  BTNode<int> n4(8);
  BTNode<int> n5(14);
  BTNode<int> n6(2, &n1, &n2);
  BTNode<int> n7(7, &n3, &n4);
  BTNode<int> n8(15, &n5, NULL);
  BTNode<int> n9(4, &n6, &n7);
  BTNode<int> n10(12, NULL, &n8);
  BTNode<int> n11(9, &n9, &n10);
  BinaryTree<int> bt1(&n11);
  int bt1_min, bt1_max;
  bt1.min(bt1_min);
  bt1.max(bt1_max);
  std::cout << "Max, min: " 
            << bt1_max << ", "
            << bt1_min << std::endl;
  assert(bt1_min == 1);
  assert(bt1_max == 15);
  assert(bt1.isBST());

  BTNode<int> m1(14);
  BTNode<int> m2(20);
  BTNode<int> m3(18, &m1, &m2);
  BTNode<int> m4(2);
  BTNode<int> m5(9);
  BTNode<int> m6(5, &m4, &m5);
  BTNode<int> m7(15, NULL, &m3);
  BTNode<int> m8(10, &m6, &m7);
  BinaryTree<int> bt2(&m8);
  int bt2_min, bt2_max;
  bt2.min(bt2_min);
  bt2.max(bt2_max);
  std::cout << "Max, min: " 
            << bt2_max << ", "
            << bt2_min << std::endl;
  assert(bt2_min == 2);
  assert(bt2_max == 20);
  assert(!bt2.isBST());

  // Third tree which isn't a BST
  // http://ow.ly/FbZ44
  BTNode<int> k1(20);
  BTNode<int> k2(60);
  BTNode<int> k3(70);
  BTNode<int> k4(90);
  BTNode<int> k5(30, &k1, &k2);
  BTNode<int> k6(80, &k3, &k4);
  BTNode<int> k7(50, &k5, &k6);
  BinaryTree<int> bt3(&k7);
  std::cout << "bt3.isBST() -> " 
            << std::boolalpha
            << bt3.isBST()
            << std::endl;

  return 0;
}
