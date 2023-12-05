#include"main.h"

/**
 * print_string - Prints a string
 * @args: List a of arguments
 * @content: Buffer array to handle print
 * Return: Number of chars
*/

int print_string(va_list args, char content[])
{
	int length = 0, i;

	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
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

int print_char(va_list args, char content[])
{
	char c = va_arg(args, int);

	return (handle_write_char(c, content));
}

/**
 * print_percent - Prints a percent sign
 * @args: List a of arguments
 * @content: Buffer array to handle print
 * Return: Number of chars
*/

int print_percent(va_list args, char content[])
{
	return (write(1, "%%", 1));
}
