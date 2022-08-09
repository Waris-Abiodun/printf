#include "main.h"

/**
 * _putchar -it is use to print a single characte just like
 * putchar function in stdio lirary
 * @s: character to be printed
 * Return: character to be printed
 */
int _putchar(char s)
{
	static char b[1024];
	static int bSize;
	
	if (s == -1 || bSize >= 1024)
	{
		write(1, &b, bSize);
		bSize = 0;
	}
	if (s != -1)
		b[bSize++] = s;
	return (1);
}
