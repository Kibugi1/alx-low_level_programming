#include "main.h"

/**
 * _strncpy - copies inputted number
 * of bytes from ssrc to  dest
 * @dest: the string where content is copied to
 * @src: the string where conted is copied from
 * @n: number of bytes to be copied from src
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;

	while (src[i++])
	srclen++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];

	for (i = srclen; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
