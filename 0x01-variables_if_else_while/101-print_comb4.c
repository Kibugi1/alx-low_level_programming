#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int d, t, z;

	for (d = '0'; d < '9'; d++)
	{
	for (t = d + 1; t <= '9'; t++)
	{
	for (z = t + 1; z <= '9'; z++)
	{
	if ((t != d) != z)
	{
	putchar(d);
	putchar(t);
	putchar(z);
	if (d == '7' && t == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
