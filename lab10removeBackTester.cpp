/*----------------------------------------------------------------- 
 Driver program to test the Queue class. 
 -----------------------------------------------------------------*/ 
#include <iostream> 

#include "Queue.h" 

using namespace std; 
 
int main() { 
  Queue q1; 
  q1.enqueue(100); 
  q1.enqueue(200); 
  q1.enqueue(300); 
  q1.enqueue(400); 
  q1.dequeue(); 
  q1.removeBack(); 

  q1.display(cout); // Queue has 200 300 

  q1.enqueue(400); 
  q1.enqueue(500); 
  q1.dequeue(); 
  q1.dequeue(); 
  q1.enqueue(600); 
  q1.enqueue(700); 
  q1.removeBack(); 

  q1.display(cout); // Queue has 400 500 600 

  return 0; 
} 
