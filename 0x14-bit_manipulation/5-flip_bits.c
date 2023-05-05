#include "main.h"

/**
 * flip_bits -a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: the second number
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitcount = 0;
	unsigned long int b = n ^ m;

	while (b)
	{
		bitcount += b & 1;
		b >>= 1;
	}

	return (bitcount);
}
