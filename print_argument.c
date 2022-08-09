#include "main.h"
#include <stdarg.h>

/**
 * print_argument - print argument corresponding to specifier
 * @c: specifier
 * Return: void
 */
int (*print_argument(char c))(va_list, int *)
{
	sp list[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'%', print_per},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_lower_hex},
		{'X', print_upper_hex},
		{'p', print_pointer},
		{'S', print_String},
		{'r', print_rev},
		{'R', print_rot13}
	};
	int i;

	i = 0;
	while (i < 14)
	{
		if (c == list[i].c)
			return (list[i].f);
		i++;
	}
	_putchar('%');
	_putchar(c);
	return (0);
}
