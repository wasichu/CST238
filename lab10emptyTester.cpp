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
  cout << "Queue full? [ANSWER: 0] " << q1.full() << endl; 

  q1.enqueue(400); 
  cout << "Queue full? [ANSWER: 1] " << q1.full() << endl; 

  q1.dequeue(); 
  q1.dequeue(); 

  q1.enqueue(500); 
  cout << "Queue full? [ANSWER: 0] " << q1.full() << endl; 

  q1.enqueue(600); 
  cout << "Queue full? [ANSWER: 1] " << q1.full() << endl; 

  return 0; 
} 
