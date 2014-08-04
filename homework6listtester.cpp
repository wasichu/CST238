//--- listtester.cpp: Program to test List class.
#include <iostream>

#include "List.h"
using namespace std;

int main() {
  // Test the class constructor
  List scoreList;
  cout << "Constructing scoreList\n";

  // Test addItem() by adding 80.5, 100.0, 89.0, 75.5, and 100.0.
  scoreList.addItem(80.5);
  scoreList.addItem (100.0);
  scoreList.addItem (89.0);
  scoreList.addItem (75.5);
  scoreList.addItem (100.0);
  cout << scoreList << endl;

  // Test countItem()  The result should be 2.
  cout << "No. of 100.0 : " << scoreList.countItem(100.0) << endl;

  // Test countItem()  The result should be 0.
  cout << "No. of 70.0 : " << scoreList.countItem(70.0) << endl;

  // Test deleteItem() - deleting 100.0 and 70.0 from the list
  cout << "delete 100.0: " << scoreList.deleteItem(100.0) << endl;
  cout << "delete 70.0: " << scoreList.deleteItem(70.0) << endl;
  cout << scoreList << endl;

  return 0;
}

