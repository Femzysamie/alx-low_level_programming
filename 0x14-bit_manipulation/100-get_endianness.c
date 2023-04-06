#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 If big-endian.
 *         1 If little-endian.
 */

int get_endianness(void)
{
	char *c;
	int x = 1;

	c = (char *)&x;

	return (*c);
}
