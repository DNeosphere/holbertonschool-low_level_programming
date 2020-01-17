#include "search_algos.h"
#include <math.h>
/**
 * jump_search -  searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: to search for
 * Return: index or -1 if error
 */
int jump_search(int *array, size_t size, int value)
{
	size_t end = sqrt(size), sqt = sqrt(size), start = 0;

	if (array == NULL)
		return (-1);

	if (array[start] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		return (start);
	}

	if (array[end] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		return (end);
	}

	while (array[start] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[end] >= value || end >  size - 1)
			break;
		start = end;
		end += sqt;
		if (start >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	while (start <= end)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (start >= (size - 1))
			return (-1);

		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
