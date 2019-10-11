#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int iter = 0, flag;

	if (ht == NULL)
		return;

	printf("{");
	flag = 0;
	while (iter < ht->size)
	{
		current = ht->array[iter];
		while (current)
		{
			if (flag)
				printf(", ");
			printf("\'%s\': \'%s\'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
		iter++;
	}
	printf("}\n");
}
