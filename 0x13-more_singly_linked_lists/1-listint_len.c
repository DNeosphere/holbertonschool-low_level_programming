#include "lists.h"
/**
 * listint_len - prints the number of elements of a linked lists
 * @h: pointer to the start of the list
 * Return: number of items in the list
 **/
size_t listint_len(const listint_t *h)
{
	int count;

	while (h)
	{
		count++;
		h =  h->next;
	}
	return (count);
}
