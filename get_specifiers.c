#include "main.h"

/**
 * print_specifiers - a function pointer that get the character afte
 * format specifiers() and return the argument expected for the specify
 * @s: format specifiers
 * Return: the argument expected whether a string , int ,character etc
 */
int (*print_specifiers(char s))(va_list arguments)
{
	fspecs list = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_specifier},
		{'d', print_digit},
		{'i', print_int},
	}
	unsigned int i;
	unsigned int k = _strlen(list);

	for (i = 0; i < k; i++)
	{
		if (s == list[i].s)
		{
			return (list[i].fpointer);
		}
		i++
	}
	_putchar('%');
	_putchar(c);
}
