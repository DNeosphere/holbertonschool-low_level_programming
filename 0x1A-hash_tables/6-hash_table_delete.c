#include "hash_tables.h"
/**
 * hash_table_delete - frees memory from a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned int iter = 0;

	if (ht == NULL)
		return;

	while (iter < ht->size)
	{
		current = ht->array[iter];
		while (current)
		{
			next = current;
			free(next->value);
			free(next->key);
			current = current->next;
			free(next);
		}
		iter++;
	}
	free(ht->array);
	free(ht);
}
