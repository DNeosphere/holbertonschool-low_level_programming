#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the start of the list
 * Return: number of items in the list
 **/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
