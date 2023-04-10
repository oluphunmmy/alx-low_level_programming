#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_djb2 - A hash function with the djb2 algorithm.
  * @str: The string to ash
  *
  * Return: the calculated hash
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
	{
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */
	}
	return (hash);
}
