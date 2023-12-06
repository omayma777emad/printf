#include"main.h"

char *str = va_arg(args, char*);
/**
 * print_string - Prints a string
 * @args: List a of6 arguments
 * @content: Buffer array to handle print
 * Return: Number of chars
*/
int print_string(va_list args, char content[])
{
	int length = 0;

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

int print_char(va_list args, char content[])
{
	char c = va_arg(args, int);

	handle_write_char(c, content);
}

/**
 * print_percent - Prints a percent sign
 * @list: List a of arguments
 * @content: Buffer array to handle print
 * Return: Number of chars
*/

int print_percent(va_list args, char content[])
{
	return (write(1, "%%", 1));
}
