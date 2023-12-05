#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a charcter in the standard output
 *
 * @c: character to be printed
 *
 * Return: return 1 on success , returns -1 on fail
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
