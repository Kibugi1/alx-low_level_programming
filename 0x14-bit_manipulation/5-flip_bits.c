#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first integer to compare
 * @m: second integer to flip to
 * Return: number of bits that was required to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitsdiff;
	int bitscheck;

	bitsdiff = n ^ m;
	bitscheck = 0;

	while (bitsdiff)
	{
		bitscheck++;
		bitsdiff = bitsdiff & (bitsdiff - 1);
	}

	return (bitscheck);
}
