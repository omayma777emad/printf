#include "main.h"

/**
 * handle_content - Prints an argument based on its type
 * @data: Formatted string in which to print the arguments.
 * @args: List of arguments to be printed.
 * @index: index
 * @content: Buffer array to handle print.
 * Return: int
*/

int handle_content(const char *data,int *index, va_list args, char content[])
{
	int i, chars, index;
	da_ta data_type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'\0', NULL}
	};
	for (i = 0; data_type[i].data != '\0'; i++)
		if (data[*index] == data_type[i].data)
			return (data_type[i].f(args, content));
	if (data_type[i].data == '\0')
	{
		if (data[*index] == '\0')
			return (-1);
}
return (chars);
}
