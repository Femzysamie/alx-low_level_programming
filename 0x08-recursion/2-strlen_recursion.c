#include "main.h"

/**
 * _strlen_recursion - Returns he length of a string.
 * *@s: string to measured.
 *
 * Return: The length of the sring.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
