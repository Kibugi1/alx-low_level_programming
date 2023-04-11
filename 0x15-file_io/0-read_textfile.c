#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: this is the pointer to the name of file
 * @letters: The number of letters to be read and printed by function
 *
 * Return: actual number of letters it could read and print
 * or if the file can not be opened or read, return 0
 * or if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wrt);
}
