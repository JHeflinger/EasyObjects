#ifndef EZO_MEMORY
#define EZO_MEMORY

#include <stdint.h>

void* ez_allocate(size_t amount, size_t size);
void ez_free(void* ptr);
size_t ez_allocated_bytes();

#define EZALLOC(numthings, thingsize) ez_allocate(numthings, thingsize);
#define EZFREE(pointer) ez_free((void*)pointer);
#define EZALLOCATED() ez_allocated_bytes();

#endif
