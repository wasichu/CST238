//--- listtester.cpp: Program to test List class. 
#include <iostream> 

#include "DList.h" 
using namespace std; 
 
int main() { 
  // Test the class constructor with two elements.
  List intList (2); 
  cout << "Constructing intList\n"; 

  // Test addItem() by adding 30, 30, 40, 50, 10, and 60. 
  cout << "Adding 30." << endl; 
  intList.addItem (30); 
  cout << "Adding 40." << endl; 
  intList.addItem (40); 
  cout << intList << endl; 
  cout << "Adding 50." << endl; 
  intList.addItem (50); 
  cout << "Adding 10." << endl; 
  intList.addItem (10); 
  cout << "Adding 60." << endl; 
  intList.addItem (60); 

  // Display the content of the array 
  cout << intList << endl; 

  // Test findLast() 
  cout << "Position (30): " << intList.findLast(30) << endl; 
  cout << "Position (70): " << intList.findLast(70) << endl; 

  // Test deleteItem() by deleting 30, 40, and 60 from the list 
  cout << "deleteItem 30: " << intList.deleteItem(30) << endl; 
  cout << "deleteItem 40: " << intList.deleteItem(40) << endl; 
  cout << "deleteItem 60: " << intList.deleteItem(60) << endl; 
  cout << intList << endl; 

  return 0;
} 
