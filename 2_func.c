#include "main.h"

/**
 * print_int - prints integer
 * @args: argument to print
 * @content: array
 * Return: number of characters printed
 */
int print_int(va_list args, char content[])
{
	int n = va_arg(args, int);
	int chars = 0;

	if (n < 0)
	{
		_putchar('-');
		chars++;
		n = -n;
	}
	int number = n;
	int ex = 1;

	while (number / 10 != 0)
	{
		ex *= 10;
		number /= 10;
	}
	number = n;

	while (ex > 0)
	{
		int digit = number / ex;

		_putchar(digit + '0');
		chars++;
		number -= digit * ex;
		ex /= 10;
	}

	_putchar(number + '0');
	chars++;

	return (chars);
}
