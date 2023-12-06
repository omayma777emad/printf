#include "main.h"

void cont_array(char content[], int *cont_index);
int handle_content( va_list args, int index, char content[]);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int i, output = 0, chars = 0;
	int cont_index = 0;
	char content[CONT_SIZE];
	
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
			output = handle_content( va_list args, int index, char content[]);
			
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
