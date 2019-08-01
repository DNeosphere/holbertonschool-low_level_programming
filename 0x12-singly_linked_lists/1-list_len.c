#include "lists.h"
/**
 * list_len - prints the number of elements of a list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
return (count);
}
