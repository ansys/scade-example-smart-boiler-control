#include "sgl_types.h"
#include "storeAndUpdateValues_mem.h"
#include <time.h>

void storeAndUpdateValues_reset (storeAndUpdateValues_mem *mem)
{
    mem->lastTrueTime = time(NULL);
    mem->init = 1;
}

/* Imported functions */
void storeAndUpdateValues(SGLfloat currentValue, SGLfloat (*oldValues)[22UL], storeAndUpdateValues_mem *mem)
{
    time_t currentTime = time(NULL);
    int i;

    if (mem->init)
    {
        mem->lastTrueTime = time(NULL);
        mem->init = 0;
    }
    /* Update array each 5 sec 
    0-> newest value
    21-> oldest value
    */
    if (currentTime - mem->lastTrueTime >= 5) {
        mem->lastTrueTime = currentTime;
        for(i = 21; i > 0; i--)
        {
            (*oldValues)[i] = (*oldValues)[i-1];
        }
        (*oldValues)[i] = currentValue;
    }
}
