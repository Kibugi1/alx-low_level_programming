#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: a pointer to the name of file to be created
 * @text_content: pointerto the string to write
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wrt, leng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(op, text_content, leng);

	if (op == -1 || wrt == -1)
		return (-1);
	close(op);
	return (1);

}

