#include "main.h"

/**
 * handle_content - Prints an argument based on its type
 * @data: Formatted string in which to print the arguments.
 * @args: List of arguments to be printed.
 * @index: index
 * @content: Buffer array to handle print.
 * Return: int
*/

int handle_content( va_list args, char content[])
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
	for (i = 0; spc[i].spc != '\0'; i++)
		if (spc[i].spc == spc[i].spc_f)
			return (spc[i].f(args, content));

return (chars);
}
