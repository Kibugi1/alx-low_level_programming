#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: The pointer to the name of file being created
 * @text_content: a pointer to the string to write to the file
 * Return: -1 if the function fails or 1 if on success
 */

int create_file(const char *filename, char *text_content)
{
	int op, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(op, text_content, len);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);

}
