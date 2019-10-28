#include "sort.h"
/**
 * bubble_sort - function that sorts array of int
 * with bubble method
 * @array: list to be sorted
 * @size: length og array inlet
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int j = 0;
	int aux = 0;

	if (size < 2 || !array)
		return;

	while (j <= size - 1)
	{
		if (array[j] > array[j + 1])
		{
			aux = array[j + 1];
			array[j + 1] = array[j];
			array[j] = aux;
			j = 0;
			print_array(array, size);
			continue;
		}
		j++;
	}

}
