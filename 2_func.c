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
	int end = n % 10, digit, ex = 1;
	int number, chars = 1;

	UNUSED(content);

	n = n / 10;
	number = n;

	if (end < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		end = -end;
		chars++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10;
		}
		number = n;
		while (ex > 0)
		{
			digit = number / ex;
			_putchar(digit + '0');
			number = number - (digit * ex);
			ex = ex / 10;
		chars++;
		}
	}
	_putchar(end + '0');

	return (chars);
}
