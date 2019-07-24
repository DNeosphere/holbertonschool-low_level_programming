#include "function_pointers.h"
#include "stdlib.h"
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array of integers to execute the function on
 * @size: of the array
 * @action: pointer to functions
 **/
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int a;

	if (action == NULL || array == NULL || size <= 0)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
