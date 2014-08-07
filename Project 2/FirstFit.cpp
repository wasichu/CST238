#include "FirstFit.h"

// Allocate size number of bytes
// Returns a pointer to the newly
// allocated chunk of memory
//
// Invaraint: newly allocated memory
//            must be zero'ed out
//
//    Errors: requested size is larger
//            than the greatest chunk
void *FirstFit::allocate(size_t size) {

}

// Free previously allocated memory
//
// Invariant: freed memory must be zero'd out
//
//    Errors: trying to free memory not currently
//            allocated
void FirstFit::free(void* ptr) {

}
