#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: pointer to the hash table
 * @key: key to look for
 * Return: value stored inside the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (!ht || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
