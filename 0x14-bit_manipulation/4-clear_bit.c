#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: the index, starting from 0 of the bit you want to set
 * @n: pointer to decimal number to change bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;
	unsigned int set;

	if (index > 64)
		return (-1);

	set = index;
	for (q = 1; set > 0; q = q * 2, set--)
		;

	if ((*n >> index) & 1)
		*n = *n - q;

	return (1);
}
