#include "lists.h"
/**
 * free_dlistint - frees memory from a dlinked list
 * @head: pointer to the first node
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next, *current;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
