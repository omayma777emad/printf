#include "main.h"

/**
 * print_string - Prints a string
 * @args: List a of arguments
 * @content: array
 * Return: Number of chars
*/
int print_string(va_list args, char content[])
{
	int length = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		return (-1);
	}

	UNUSED(content);

	while (str[length] != '\0')
	{
		length++;
	}

	int bytes_written = write(1, str, length);

	if (bytes_written < 0 || bytes_written != length)
	{
		return (-1);
	}

	return (bytes_written);
}

/**
 * print_char - Prints a char
 * @args: List a of arguments
 * @content:array
 * Return: Number of chars
*/

int print_char(va_list args, char content[])
{
	char c = va_arg(args, int);

	content[0] = c;
	return (handle_write_char(c, content));
}

/**
 * print_percent - Prints a percent sign
 * @args: List a of arguments
 * @content: array
 * Return: Number of chars
*/
int print_percent(va_list args, char content[])
{
	UNUSED(args);
	UNUSED(content);
	return (write(1, "%%", 1));
}
