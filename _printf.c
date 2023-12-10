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
	int i, output = 0, chars = 0;
	int cont_index = 0;
	char content[CONT_SIZE];

	va_list args;
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
			output = handle_content(args, index, content);
			
			chars += output;
		}
	}

	cont_array(content, &cont_index);

	va_end(args);

	return (chars);
}
