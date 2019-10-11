#include "hash_tables.h"
/**
 * hash_djb2 - returns a hash
 * @str: string to hash
 * Return: number to store data in a bucket
 **/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
