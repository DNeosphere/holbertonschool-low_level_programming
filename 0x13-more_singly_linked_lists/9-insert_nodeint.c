#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @idx: index to insert the node
 * @num: value of the new node
 * @head: pointer to the start of the list
 * Return: pointer to new node, NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int num)
{
	unsigned int count;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = num;

	temp = *head;
	count = 0;
	while (count < (idx - 1))
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
