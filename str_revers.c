#include "main.h"

/**
 * printf_rev - function that prints a str in reverse
 * @args: list of arguments
 * Return: reversed  string
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
