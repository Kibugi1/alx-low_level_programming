#include "main.h"

/**
 * *_strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: the string to be added upon
 * @src: string to be added to dest
 * @n: the number of bytes to be added to dest
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, finlen = 0;

	while (dest[i++])
	finlen++;
	for (i = 0; src[i] && i < n; i++)
	dest[finlen++] = src[i];
	return (dest);
}
