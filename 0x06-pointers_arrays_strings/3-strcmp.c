#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: a pointer to the first string to be compared
 * @s2: The second string to be compared
 * Return: if s1 < s2, the negative diffference between the two characters
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the two characters
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
