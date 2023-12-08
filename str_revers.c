#include "main.h"

/**
 * print_rev - function that prints a str in reverse
 * @args: list of arguments
 * Return: reversed  string
 * @content: array
*/

int print_rev(va_list args, char content[])
{

	char *str = va_arg(args, char*);
	int i, j = 0;

	UNUSED(content);
	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}

/**
 * print_rotstring - Print a string in rot13.
 * @args: Lista of arguments
 * @content: array
 * Return: Numbers of chars printed
 */

int print_rotstring(va_list types, char content[])
{
	char output;
	char *str;
	unsigned int i, j;
	int chars = 0;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(types, char *);
	UNUSED(content);

	if (str == NULL)
		str = "(AHYY)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; s1[j]; j++)
		{
			if (s1[j] == str[i])
			{
				output = s2[j];
				write(1, &output, 1);
				chars++;
				break;
			}
		}
		if (!s1[j])
		{
			output = str[i];
			write(1, output, 1);
			chars++;
		}
	}
	return (chars);
}
