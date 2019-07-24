#include "function_pointers.h"
#include "stdlib.h"
/**
 * int_index - searches for an integer
 * @array: cointinig the integers to search for
 * @size: size of the array
 * @cmp: pointer to the functions
 * Return: -1 if fails, index of the found integer
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a])  != 0)
			return (a);
	}
return (-1);
}
