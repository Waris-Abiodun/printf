#include "main.h"

/**
 * print_specifiers - a function pointer that get the character afte
 * format specifiers() and return the argument expected for the specify
 * @s: format specifiers
 * Return: the argument expected whether a string , int ,character etc
 */
int (*print_specifiers(char s))(va_list argument)
{
	fspec list[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_specifier},
		{'d', print_int},
		{'i', print_int},
	}
	unsigned int i;

	for (i = 0; i < 5; i++)
	{
		if (s == list[i].s)
		{
			return (list[i].fpointer);
		}
	};
	_putchar('%');
	_putchar(s);
	return (0);
}
