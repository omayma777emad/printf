#include "main.h"

void cont_array(char content[], int *cont_index);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, output = 0, chars = 0;
	int cont_index = 0;
	va_list args;
	char content[CONT_SIZE];

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			content[cont_index++] = format[i];
			if (cont_index == CONT_SIZE)
				cont_array(content, &cont_index);
			chars++;
		}
		else
		{
			cont_array(content, &cont_index);
			++i;
			output = handle_content(const char *spc, int *index, va_list args, char content[]);
			
			chars += output;
		}
	}

	cont_array(content, &cont_index);

	va_end(args);

	return (chars);
}

/**
 * cont_array - Prints the contents of the buffer if it exist
 * @content: Array of chars
 * @cont_index: Index at which to add next char, represents the length.
 */
void cont_array(char content[], int *cont_index)
{
	if (*cont_index > 0)
		write(1, &content[0], *cont_index);

	*cont_index = 0;
}
