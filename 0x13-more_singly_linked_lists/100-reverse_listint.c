#include "lists.h"
/**
 * reverse_listint - reverses a list recursively
 * @head: pointer to the first element of the list
 * Return: head
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	*head = (*head)->next; /*moves forwards in the list */
	temp->next = reverse_listint(head); /*recursion: the list will be reversed while stored in the stack*/
	*head = temp; /*set the head to the first element*/
	return (*head);
}
