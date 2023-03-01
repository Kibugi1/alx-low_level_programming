#include "main.h"

/**
 * *_strcat - conctenates two strings
 * @dest: This is destination string
 * @src: This is the source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int finlen = 0, i;

	while (dest[finlen])
	{
		finlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[finlen] = src[i];
		finlen++;
	}
	dest[finlen] = '\0';
	return (dest);
}
