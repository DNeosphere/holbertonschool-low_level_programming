#include "hash_tables.h"
/**
 * hash_table_set - sets a hash table
 * @ht: pointer to the hash table
 * @key: to sort
 * @value: to store
 * Return: 1 on success, 0 on failure
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, size;
	hash_node_t *n_node, *start, *current;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);

	size = ht->size;
	idx = key_index((const unsigned char *)key, size);
	if (ht->array[idx] == NULL)
	{
		n_node = add_node(value, key);
		ht->array[idx] = n_node;
		return (1);
	}
	if (ht->array[idx] != NULL)
	{
		start = ht->array[idx];
		current = ht->array[idx];

		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				return (1);
			}
			current = current->next;
		}
		n_node = add_node(value, key);
		n_node->next = start;
		ht->array[idx] = n_node;
		return (1);
	}
	return (0);
}
/**
 * add_node - creates a new node
 * @key: key
 * @value: value
 * Return: pointer to the new node
 */
hash_node_t *add_node(const char *value, const char *key)
{
	hash_node_t *n_node;

	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
		return (NULL);
	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = NULL;
	return (n_node);
}
