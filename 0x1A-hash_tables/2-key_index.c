#include "hash_tables.h"
/**
 * key_index - finds an index to store the value into a hash table
 * @size: of the array to store the keys
 * @key: to store
 * Return: index to store the value
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
