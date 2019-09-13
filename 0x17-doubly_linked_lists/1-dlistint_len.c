#include "lists.h"
/**
 * dlistint_len - finds the length of a double linked list
 * @h: pointer to the first node of the list
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
