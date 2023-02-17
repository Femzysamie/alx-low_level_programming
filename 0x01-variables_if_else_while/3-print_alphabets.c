#include <stdio.h>
#include <ctype.h>
/**
 * main - program that prints the alphabet in lowercase,and then in uppercase
 *
 * return: 0, if succesful
 */
int main(void)
{
	char lc = 'a';
	char up = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}

	putchar('\n');

		return (0);
}
