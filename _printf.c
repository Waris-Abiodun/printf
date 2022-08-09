#include "main.h"
#include <stdarg.h>
/**
 * _printf - a function that workslike prntf function from stdio library
 * @format : this are the string and format specifify that will be printed
 * Return: number of string printed
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int len = 0;
	va_list argument;
	int (*fpointer)(va_list argument);

	va_start(argument, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] && format[1] == ' ' && !format[2])
		return (-1);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else if(format[i + 1] != '\0')
		{
			fpointer = print_specifiers(format[i + 1]);
			if (fpointer)
			{
				len += fpointer(argument);
			}
			else
				len += 2;
			i++;
		}
		else
		{
		return (-1);
		}
		i++;
	}
	_putchar(-1);
	va_end(argument);
	return (len);
}
