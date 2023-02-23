#include "main.h"
/**
 * _isdigit - checks for a digit
 * @d: The digit to be checked
 * Return: 1 for character that will be a digit or 0 for any else
 */

int _isdigit(int d)
{
	if (d >= 48 && d <= 57)
	{
	return (1);
	}
	return (0);
}
