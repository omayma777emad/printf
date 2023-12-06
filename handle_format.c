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
	spc_f spc_types[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'\0', NULL}
	};
	for (i = 0; spc_types[i].spc != '\0'; i++)
		if (spc[*index] == spc_type[i].spc)
			return (spc_type[i].f(args, content));
	if (spc_type[i].spc == '\0')
	{
		if (spc[*index] == '\0')
			return (-1);
}
return (chars);
}
