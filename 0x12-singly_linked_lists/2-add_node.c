#include "lists.h"
/**
 * add_node - adds a node at the end of a list
 * @head: pointer to the start of the list
 * @str: string to be copied inside the new node
 * Return: pointer to the new node
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(const char *s)
{
int a;
int len;
for (a = 0; s[a] != '\0'; a++)
{
len++;
}
return (a);
}
