#include "main.h"

/**
 * handle_content - Prints an argument based on its type
 * @data: Formatted string in which to print the arguments.
 * @args: List of arguments to be printed.
 * @index: index
 * @content: Buffer array to handle print.
 * Return: int
*/

int handle_content(const char *spc, int *index, va_list args, char content[])
{
	int i,  chars = -1;
	spc_f spc[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'\0', NULL}
	};
	for (i = 0; spc[i].spc_f != '\0'; i++)
		if (spc[*index] == spc[i].spc_f)
			return (spc[i].f(args, content));
	if (spc[i].spc_f == '\0')
	{
		if (spc[*index] == '\0')
			return (-1);
}
return (chars);
}
