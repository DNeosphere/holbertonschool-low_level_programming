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
	if (idx == 0)
	{
		pop_listint(head);
		return (1);
	}

	temp = *head;
	count = 0;
	while (count < (idx - 1))
	{
		count++;
		temp = temp->next;
		if (temp == NULL|| temp->next == NULL)
			return (-1);
	}
	temp_addr = temp->next->next;
	free(temp->next);
	temp->next = temp_addr;
	return (1);

}
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 * Return:  the head nodes data (n).
 **/

int pop_listint(listint_t **head)
{
	int copy;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	copy = temp->n;
	free(temp);
	return (copy);
}
