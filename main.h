#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct Format_specifier - a formatsepcifies that gets the specifes
 * and execute the appropriate argument
 * @s: format specifier
 * @fpointer: pointer that print the argument
 * Description: itreplace the format specifier with the argument
 */
typedef struct Format_specifier
{
	char s;
	int (*fpointer)(va_list argument);
} fspec;

int (*print_specifiers(char s))(va_list argument);
int print_char(va_list argument);
int print_specifier(__attribute__((unused)) va_list argument) ;
int print_string(va_list argument);
int print_int(va_list argument);
int _printf(const char *format, ...);
int _strlen(const char *format);
int _putchar(char s);
#endif /* MAIN_H */
