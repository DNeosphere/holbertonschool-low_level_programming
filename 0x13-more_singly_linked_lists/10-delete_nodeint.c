#include "lists.h"
/**
 *
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *temp, *temp_addr;
	unsigned int count;

	if (head == NULL)
		return (-1);

	temp = *head;
	count = 0;
	while (count < idx)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	temp_addr = temp->next;
	free(temp);
	temp = *head;
	count = 0;
	while (count < (idx - 1))
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	temp->next = temp_addr;
	return (1);
}
