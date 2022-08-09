#include "main.h"

/**
 * _strlen - gives the total number of string we are
 * to print including format specifier(%)
 * @format: string to be printed
 * Return: number of format
 */
int _strlen(const char *format)
{
	int i;

	for (i = 0;  format[i] != '\0'; ++i)
	{
	}
	return (i);
}

/**
 * _putchar -it is use to print a single characte just like
 * putchar function in stdio lirary
 * @s: character to be printed
 * Return: character to be printed
 */
int _putchar(char s)
{
	return (write(1, s, 1));
}
