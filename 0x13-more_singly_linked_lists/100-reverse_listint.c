#include "lists.h"
/**
 * reverse_listint - reverses a list recursively
 * @head: pointer to the first element of the list
 * Return: head
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *next;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		if (next == NULL)
			break;
		*head = next;
	}
	return (*head);
}
