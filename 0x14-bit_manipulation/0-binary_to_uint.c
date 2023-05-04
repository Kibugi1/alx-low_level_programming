#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to unsigned int
 *@b: a pointer to a string of 0 and 1 chars
 *Return: the converted number or
 *0 if b is NULL or there is 1 or more chars in string b
 *that is not 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;
	int leng = 0;
	int i;

	if (b == NULL)
		return (0);

	leng = strlen(b);

	for (i = 0; i < leng; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			numb += (b[i] - '0') << (leng - i - 1);
	}

	return (numb);
}
