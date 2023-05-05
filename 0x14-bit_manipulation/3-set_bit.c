#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: a pointer to the UL
 * @index: the index of the bit to set
 * Return: 1 if bit set successfully or -1 if failed to set
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
