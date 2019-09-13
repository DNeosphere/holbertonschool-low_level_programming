#include "lists.h"
/**
 * print_dlistint - prints the content of the nodes
 * of a double linked lists
 * @h: pointer to the first node
 * Return: amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
