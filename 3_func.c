#include"main.h"

/**
 * print_string - Prints a string
 * @args: List a of6 arguments
 * @content: array to handle print
 * Return: Number of chars
*/
int print_string( char str[])
{
	int length = 0;
	char str;

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

int print_char( char content[])
{

	return (write(1, &content[0], 1));
}

/**
 * print_percent - Prints a percent sign
 * @list: List a of arguments
 * @content: Buffer array to handle print
 * Return: Number of chars
*/

int print_percent()
{
	return (write(1, "%%", 1));
}
