#include "main.h"

/**
 * clear_bit - a function that  sets the value of a bit to 0 at a given index
 * @n: the pointer to the UL
 * @index: index of the bit to be cleared
 * Return: 1 if successful or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
