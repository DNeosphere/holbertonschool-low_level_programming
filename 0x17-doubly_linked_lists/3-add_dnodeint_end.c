#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a dlinked list
 * @head: pointer to the first node of the list
 * @n: number to fill the node
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
