#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the first element
 * @index: index of the list
 * Return: the ntth element
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
