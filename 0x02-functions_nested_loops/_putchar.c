#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and error is set approprately.
 */
int _putchar(char c)
{
	return (write(1, &C, 1));
}
