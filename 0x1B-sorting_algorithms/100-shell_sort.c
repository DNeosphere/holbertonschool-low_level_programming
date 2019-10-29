#include "sort.h"
/**
 * swap_vals - function that changes values of index into an array
 * @ai: value at index i
 * @aj: value at index j
 */
void swap_vals(int *ai, int *aj)
{
	int aux;

	aux = *ai;
	*ai = *aj;
	*aj = aux;
}
/**
 * shell_sort - sorts array of integers using
 * the shell sort algotim with knuth sequence
 * @array: inlet list to be sorted
 * @size: length of array
 */
void shell_sort(int *array, size_t size)
{
	size_t  i, j, gap = 0;
	int temp1, temp2;

	if (size < 2 && array == NULL)
		return;

	while (gap < size)
		gap = gap * 3 + 1;

	gap = (gap - 1) / 3;
	while (gap > 0)
	{
		i = gap;
		while (i < size)
		{
			/* temp = array[i]; */
			j = i;
			while (j >= gap)
			{
				temp1 = array[i];
				temp2 = array[j - gap];
				if (temp1 < temp2)
				{
					swap_vals(&array[i], &array[j - gap]);
					i -= gap;
				}
				j -= gap;
			}
			i++;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
