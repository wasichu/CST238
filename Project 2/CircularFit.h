/*
 *
 *   File Name: CircularFit.h
 *        Name: 
 *      Course: CST 238
 *        Term: Fall 2014
 *  Assignment: Project 2
 *    Abstract: CircularFit Base Class
 *
 */

#ifndef CIRCULAR_FIT_H
#define CIRCULAR_FIT_H

#include <list>

#include "MemoryManager.h"

using std::list;

class CircularFit : public MemoryManager {
  private:
    // iterator, i.e., pointer, to the last
    // position reached during allocation
    list<FreeBlock>::iterator lastPos;

  public:
    // Constructor
    CircularFit() : MemoryManager() { lastPos = freeList.begin(); }

    // Allocate size number of bytes
    // Returns a pointer to the newly
    // allocated chunk of memory
    //
    // Invaraint: newly allocated memory
    //            must be zero'ed out
    //
    //    Errors: requested size is larger
    //            than the greatest chunk
    void *allocate(size_t size);    
};

#endif
