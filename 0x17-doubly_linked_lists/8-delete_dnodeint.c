#include "lists.h"
/**
 * delete_dnodeint_at_index - frees memory from a given index
 * @head: pointer to the first node
 * @idx: index of the node to delete
 * Return: 1 on success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	unsigned int count = 0;
	dlistint_t *temp = *head, *next_add;

	if (*head == NULL)
		return (-1);
	while (temp)
	{
		if (count == idx - 1)
		{
			next_add = (temp->next)->next;
			free(temp->next);
			temp->next = next_add;
			temp->next->prev = temp;
			return (1);
		}
		else if (idx == 0)
		{
			*head = (*head)->next;
			if (temp->next != NULL)
				temp->next->prev = NULL;
			else
				*head = NULL;
			free(temp);
			return (1);
		}
		if (!temp->next)
			return (-1);
		temp = temp->next;
		count++;
	}
	return (-1);
}
