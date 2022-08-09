#include "main.h"

/**
 * print_char - print a character
 * @argument:  character argument to replace the specifier c
 * Return: (1)
 */
int print_char(va_list argument)
{
	_putchar(va_arg(argument, int));
	return (1);
}

/**
 * print_specifier - print %
 * @argument:do not use
 * Return: (1)
 */
int print_specifier(__attribute__((unused)) va_list argument)
{
	_putchar('%');
	return (1);
}

/**
 * print_string - use putchar to print string
 * @argument: string to be printed
 * Return: lenght of array/string
 */
int print_string(va_list argument)
{
	unsigned int i;
	char *string;
	string = va_arg(argument, char *);

	if (!string)
		string = "(null)";
	_putchar(string[0]);
	while (string[i] != '\0')
		_putchar(string[i++]);
	return (i);
}

/**
 * print_int - print an integer
 * @argument: jcdo
 * Return: digit count
 */
int print_int(va_list argument)
{
	int a, i, size , base;
	int arr[100];

	i = 99;
	base = 10;
	a = va_arg(argument, int);
	size = 0;

	if(a < 0)
	{
		a *= -1;
		size++;
		_putchar('-');
	}
	while(a > 9)
	{
		arr[i--] = a % base;
		a /= base;
	}
	arr[i] = a;
	while (i < 100)
	{
		_putchar(arr[i++] + '0');
		size++;
	}
	return (size);
}
