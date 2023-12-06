#include "main.h"

/**
 * print_int - handles the i case in printf
 * @args:arguments list
 * @content:srray to handle printing
*/
int print_int(va_list args, int content[])
{
	int reg = args(arg, int);
	int ver = 0;

	while (reg > 0)
	{
		ver = ver * 10 + (reg % 10);
		reg = reg / 10;
	}

	if (ver > 0)
	{
		while (ver > 0)
		{
			_putchar(ver % 10 + '0');
			ver = ver / 10;
		}
	}

	if (ver = 0)
		_putchar ('0');
}
