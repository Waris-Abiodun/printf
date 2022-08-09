#include "main.h"
/**
 * _printf - a function that workslike prntf function from stdio library
 * @format : this are the string and format specifify that will be printed
 * Return: number of string printed
 */

int _printf(const char *format, ...)
{
	int i;
	int count = _strlen(format);
	va_list argument;
	int (*fpointer)(va_list argument);

	va_start(argument, format);
	for (i = 0; i < count; i++)
	{
		if (format[i] == '%')
		{
			fpointer = print_specifiers(format[i + 1]);
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(argument);
	return (count);
}
