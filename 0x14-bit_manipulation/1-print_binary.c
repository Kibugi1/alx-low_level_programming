#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n : number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int printbi;
	int moves;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (printbi = n, moves = 0; (printbi >>= 1) > 0; moves++)
		;

	for (; moves >= 0; moves--)
	{
		if ((n >> moves) & 1)
			printf("1");
		else
			printf("0");
	}
}
