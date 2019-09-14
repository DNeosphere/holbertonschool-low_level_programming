#include "lists.h"
/**
 * insert_dnodeint_at_index - insters a node in a given index
 * @h: pointer to the first node
 * @idx: index to insert the node
 * @n: value to fill the node with
 * Return: address of the new node;
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *temp = *h;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_dnodeint_d(h, n);
		return (new_node);
	}

	while (count < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end_d(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
/**
 * add_dnodeint_d - adds a node at the start of a dlinked list
 * @head: pointer to the first node
 * @n: number to be asigned to the node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_d(dlistint_t **head,  int n)
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
/**
 * add_dnodeint_end_d - adds a node at the end of a dlinked list
 * @head: pointer to the first node of the list
 * @n: number to fill the node
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end_d(dlistint_t **head, int n)
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
