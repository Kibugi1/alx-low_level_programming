#include <stdio.h>

/**
 * main - causesan infinite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/**
	 * while (i < 10)
	 * {
	 * infinite loop - No increase of variable
	 * putchar(i);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
