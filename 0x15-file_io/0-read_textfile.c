#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: a pointer to the name of the file
 * @letters: the number of letters to be read and printed
 * Return: 0 if filename is null or file cannot be opened or read
 * or if function fails
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
