#include"main.h"

/**
 * handle_write_char - Prints a string
 * @c: char types.
 * @content: array to handle print
 * Return: Number of chars
*/

int handle_write_char(char content[])
{
	return (write(1, &content[0], 1));
}
