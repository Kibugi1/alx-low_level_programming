#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key using the
 * hash_djb2 function

 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
