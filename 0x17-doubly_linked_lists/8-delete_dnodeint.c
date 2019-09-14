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

	if (head == NULL || *head == NULL)
		return (-1);
	while (temp)
	{
		if (count == idx - 1)
		{
			if (temp == NULL)
				return (-1);
			next_add = (temp->next)->next;
			if (temp->next->next != NULL)
				temp->next->next->prev = temp;
			free(temp->next);
			temp->next = next_add;
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
		temp = temp->next;
		count++;
	}
	return (-1);
}
