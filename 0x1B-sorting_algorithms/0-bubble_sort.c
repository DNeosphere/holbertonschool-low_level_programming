#include "sort.h"
/**
 * bubble_sort - function that sorts array of int
 * with bubble method
 * @array: list to be sorted
 * @size: length og array inlet
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int j = 0, i = 0;
	int aux = 0;

	if (size < 2 || !array)
		return;

	while (i < size - 1)
	{
		j =  0;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}


}
