#include "main.h"
/**
 * _printf - Printf function
 * @format: format
 * Return: Printed chars
 */
int _printf(const char *format, ...)
{
	int chars = 0, cont_index = 0;
	char content[CONT_SIZE];
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (int i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] != '%')
		{
			content[cont_index++] = format[i];
			if (cont_index == CONT_SIZE)
			{
				cont_array(content, &cont_index);
				chars += cont_index;
				cont_index = 0;
			}
			++chars;
		}
		else
		{
			cont_array(content, &cont_index);
			++i;
			int output = handle_content(args, format[i], content);
			chars += output;
		}
	}
	cont_array(content, &cont_index);
	chars += cont_index;
	va_end(args);
	return (chars);
}
