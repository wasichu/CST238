/*
 *
 *   File Name: MemoryManager.cpp
 *        Name: 
 *      Course: CST 238
 *        Term: Fall 2014
 *  Assignment: Project 2
 *    Abstract: MemoryManager Super Class
 *
 */

#include <exception>
#include <iostream>

#include "MemoryManager.h"

using std::cout;
using std::ostream;

// Utility function used by the constructor
unsigned int bytes(size_t num, memory_unit_t unit) {
  return (unsigned int) pow(2.0, (double) unit);
}

// Exceptions which must be thrown by allocate()
// and free() when an exception occurs in either
class MemoryAllocationException : public exception {
  virtual const char* what() const throw() {
    return "Not enough memory for allocation";
  }
} allocationException;

class MemoryFreeException : public exception {
  virtual const char* what() const throw() {
    return "Cannot free unallocated memory";
  }
} freeException;

/*
 *
 *   MemoryManager Method Definitions
 *
 */
// A chunk is a contiguous sequence of free blocks
// Stores a list of contiguous chunk sizes in
// the vector passed in
// You can assume the vector passed in is empty
void MemoryManager::chunkSizes(vector<size_t> &vcs) const {
  // Your code here
}

// Returns the address of the first free block
byte *MemoryManager::firstFreeBlock() const {
  // Your code here
  return NULL;
}

// Returns the number of bytes available for allocation
size_t MemoryManager::memoryAvailable() const {
  // Your code here
  return 0;
}

// Returns the number of allocated blocks
unsigned MemoryManager::numAllocated() const {
  // Your code here
  return 0;
}

// Returns the number of free blocks
unsigned MemoryManager::numFree() const {
  // Your code here
  return 0;
}

ostream& operator<<(ostream& os, const MemoryManager& mm) {
  cout << "[Free Blocks]: " 
       << mm.numFree()
       << " | [Allocated Blocks]: "
       << mm.numAllocated()
       << " | [Available Memory]: "
       << mm.memoryAvailable()
       << "\n";
}
