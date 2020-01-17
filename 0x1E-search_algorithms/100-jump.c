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
	int start = 0, jump = 0, i = 0, sqt = sqrt(size), limit = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= limit)
	{
		jump = start + sqt;
		if (jump > limit)
			jump = limit;

		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		else if (array[start] >= jump || limit == jump)
		{
			printf("Value found between indexes [%d] and [%d]\n", start, start + sqt);

			for (i = start; i <= jump; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
		start += jump;
	}
	return (-1);

}
