#include "sort.h"
/**
 * insertion_sort_list - sorts a list using
 * the insertion algorithm
 * @list: double pointer to the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

       	if (!list)
		return;
	if ((*list)->next == NULL)
		return;


	node = (*list)->next;
	while (node)
	{
		while ((node->prev != NULL) && (node->prev->n > node->n))
		{
			node->prev->next = node->next;
			if (node->next)
				node->next->prev = node->prev;

			node->next = node->prev;
			node->prev = node->prev->prev;  /* reverse update */
			node->next->prev = node;

			(node->prev == NULL) ? (*list = node) : (node->prev->next = node);
			print_list(*list);
		}

		node = node->next;
	}
}
