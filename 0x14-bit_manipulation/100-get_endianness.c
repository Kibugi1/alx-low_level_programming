#include "main.h"

/**
 * get_endianness - funtion that check endianness
 * Return: 0 if big endian 1 if little endian
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *p = (char *)&b;

	return ((int)*p);
}
