#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number in decimal form to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned int tmp;
	int bitshift;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (tmp = n, bitshift = 0; (tmp >>= 1) > 0; bitshift++)
		;

	for (; bitshift >= 0; bitshift--)
	{
		if ((n >> bitshift) & 1)

		{
			printf("1");

		}
		else
		{

		printf("0");
		}
	}

}
