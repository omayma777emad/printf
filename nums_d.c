#include "main.h"

/**
 * print_int - handles the d case in printf
 * @args:arguments
 * @content:array for print handling
 */

void print_int(va_list args, int content[])
{
	int v = va_args(arg, int);

	if (v / 10 != 0)
	{
		nums(v);
	}

	if (v < 0)
	{
		_putchar('-');
		v = -v;
	}

	_putchar(v % 10 + '0');

}
