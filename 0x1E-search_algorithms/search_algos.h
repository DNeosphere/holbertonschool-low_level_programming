#ifndef _SEARCH_ALGOS
#define _SEARCH_ALGOS

/* Standard libraries */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Function prototype */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
