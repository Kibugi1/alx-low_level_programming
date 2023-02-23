#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: 10 times of th numbers from 0 to 14
 */


void more_numbers(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
