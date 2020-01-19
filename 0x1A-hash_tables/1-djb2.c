#include "hash_tables.h"

/**
* hash_djb2 - Implement djb2 algorithm
* @str: the key
*
* Return: hashed key index
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
