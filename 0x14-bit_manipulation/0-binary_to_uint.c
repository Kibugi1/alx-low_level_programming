#include "main.h"
#include <string.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: The converted number or 0;
 * if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int len;

	if (b == NULL)
	return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, num = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			num += power;
	}

	return (num);
}
