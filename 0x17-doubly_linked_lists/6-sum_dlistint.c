#include "lists.h"
/**
 * sum_dlistint - sums all numbers in a dlinked list
 * @head: pointer to the first node
 * Return: result of addition
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
