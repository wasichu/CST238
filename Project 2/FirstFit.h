/*
 *
 *   File Name: FirstFit.h
 *        Name: 
 *      Course: CST 238
 *        Term: Fall 2014
 *  Assignment: Project 2
 *    Abstract: FirstFit Base Class
 *
 */

#ifndef FIRST_FIT_H
#define FIRST_FIT_H

class FirstFit : public MemoryManager {
  public:
    // Constructor
    FirstFit() : MemoryManager() { }

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
    
    // Free previously allocated memory
    //
    // Invariant: freed memory must be zero'd out
    //
    //    Errors: trying to free memory not currently
    //            allocated
    void free(void* ptr);           
};

#endif
