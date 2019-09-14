#include "lists.h"
/**
 * get_dnodeint_at_index - finds the nth node of a dlinked list
 * @head: pointer to the first node
 * @index: of the node to be returned
 * Return: address of the node or null if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t  *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	return (temp);
}
