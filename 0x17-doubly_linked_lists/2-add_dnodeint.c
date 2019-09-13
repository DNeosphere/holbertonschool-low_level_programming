#include "lists.h"
/**
 * add_dnodeint - adds a node at the start of a dlinked list
 * @head: pointer to the first node
 * @n: number to be asigned to the node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
