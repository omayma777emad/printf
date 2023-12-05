#include"main.h"

/**
 * _printf - is a print function
 * @format: specific format
 * Return: chars
*/

int _printf(const char *format, ...)
{
	int chars = 0, outpu = 0;
	char content[CONT_SIZE];
	va_list args;

	va_start(args, format);
	while (*format != NULL)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chars++;
		}
		else
		{
			format++;
			cont_array(content, &cont_index);
			output = handle_content(format, args);
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
 * @cont_index: Index at which to add next char.
*/
void cont_array(char content[], int *cont_index)
{
	if (*cont_array > 0)
		write(1, &content[0], *cont_array);
	cont_index = 0;
}
