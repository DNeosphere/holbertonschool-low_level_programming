#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of the list
 * @head: pointer to the first element of the list
 * @n: number to fill the list.
 * Return: address of the new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
