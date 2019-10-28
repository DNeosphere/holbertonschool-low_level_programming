#include "sort.h"
/**
 * selection_sort - sorts an array using the selection method
 * @array: pointer to the array to be sorted
 * @size: of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, flag, cont;
	int num, aux;

	while (i < size)
	{
		j = i;
		num = array[i];
		flag = 0;
		while (j < size)
		{
			if (array[j] < num)
			{
				num = array[j];
				flag = 1;
				cont = j;
			}
			j++;
		}
		if (flag == 1)
		{
			aux = array[i];
			array[i] = num;
			array[cont] = aux;
			print_array(array, size);
		}
		i++;
	}

}
