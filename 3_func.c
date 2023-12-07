#include"main.h"

/**
 * print_string - Prints a string
 * @args: List a of6 arguments
 * @content: array to handle print
 * Return: Number of chars
*/

int print_string(va_list types, char content[])
{
	int length = 0, i;
	char *str = va_arg(types, char *);

	while (str[length] != '\0')
		length++;
	return (write(1, str, length));
}
/**
 * print_char - Prints a char
 * @args: List a of arguments
 * @content: Buffer array to handle print
 * Return: Number of chars
*/

int print_char(va_list types, char content[])
{
	char c = va_arg(types, int);

	return (handle_write_char(c, content));
}
/**
 * print_percent - Prints a percent sign
 * @list: List a of arguments
 * @content: Buffer array to handle print
 * Return: Number of chars
*/

int print_percent(va_list types, char content[])
{
	return (write(1, "%%", 1));
}
