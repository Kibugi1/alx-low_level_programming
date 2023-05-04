#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: given number to get the bit from
 * @index: Index given starting from 0
 * Return: value of the bit at index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
