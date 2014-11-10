/*
 *
 *   File Name: MemoryManager.h
 *        Name: 
 *      Course: CST 238
 *        Term: Fall 2014
 *  Assignment: Project 2
 *    Abstract: MemoryManager Super Class
 *
 */
#ifndef MEMORY_MANAGER_H_
#define MEMORY_MANAGER_H_

#include <iostream>
#include <list>
#include <vector>

using std::exception;
using std::list;
using std::vector;
using std::ostream;

typedef unsigned char byte;
enum memory_unit_t { KB = 10, MB = 20, GB = 30 };

unsigned int bytes(size_t, memory_unit_t);

class MemoryManager {
  protected:
    byte *memory; // Pointer to the start of memory
    size_t MEMORY_SIZE;
    size_t BLOCK_SIZE;

    // A FreeBlock has its start and
    // end address along with a pointer
    // to the next FreeBlock available
    struct FreeBlock {
      // Invariant: (end - start + 1) % BLOCK_SIZE == 0
      // The range is: [start, end] (inclusive of both end points)
      byte *start;
      byte *end;
      FreeBlock *next;

      // Can construct without arguments
      // Or with start and end pointers
      FreeBlock() {}
      FreeBlock(byte *s, byte *e) : start(s), end(e) {}
    };

    // Store a linked list of FreeBlock structs
    list<FreeBlock> freeList;

  public:
    // Constructor: initializes the freeList
    MemoryManager(size_t total_bytes = 0, size_t block_size = 64); 

    // Destructor
    ~MemoryManager() { delete [] memory; }

    /*
     *
     *       PUBLIC INTERFACE
     *  Must override in base class
     *
     */
    // Allocate size number of bytes
    // Returns a pointer to the newly
    // allocated chunk of memory
    //
    // Invaraint: newly allocated memory
    //            must be zero'ed out
    //
    //    Errors: requested size is larger
    //            than the greatest chunk
    virtual void *allocate(size_t size) = 0;    
    
    // Free previously allocated memory
    //
    // Invariant: freed memory must be zero'd out
    //
    //    Errors: trying to free memory not currently
    //            allocated
    //            trying to free memory not in the range
    //            [memory start, memory start + MEMORY_SIZE)
    void free(void* ptr);

    // A chunk is a contiguous sequence of free blocks
    // Stores a list of contiguous chunk sizes in
    // the vector passed in
    // You can assume the vector passed in is empty
    void chunkSizes(vector<size_t> &) const;

    // Returns the address of the first free block
    byte *firstFreeBlock() const;

    // Returns the size in bytes of the largest chunk available
    // A chunk is defined as >= 2 contiguous blocks
    // Return 0 if only single blocks are available
    size_t largestChunkAvailable() const;

    // Returns the number of bytes available for allocation
    size_t memoryAvailable() const;

    // Returns the number of allocated blocks
    unsigned numAllocatedBlocks() const;

    // Returns the number of free blocks
    unsigned numFreeBlocks() const;

    // Returns in the size in bytes of the smallest chunk available
    // A chunk is defined as >= 2 contiguous blocks
    // Return 0 if only individual blocks are available
    size_t smallestChunkAvailable() const;

    friend ostream& operator<<(ostream& os, const MemoryManager& mm);
};

#endif
