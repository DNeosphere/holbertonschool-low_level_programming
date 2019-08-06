#include "lists.h"
/**
 * free_listint2 - frees memory allocated for a list and sets the head to NULL
 * @head: pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;
	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
