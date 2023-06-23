#include "main.h"


/**
 * times_table - prints times table up to 9
 *
 * Return: void
 **/


void times_table(void)
{
	int i, j, c, z, y;

	for (i = 0; i <= 9; i++)
	{

	for (j = 0; j <= 9; j++)
	{

	c = i * j;
	if (c > 9)
	{
		z = c % 10;
		y = (c - z) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(y + '0');
		_putchar(z + '0');
	}
	else
	{
		if (j != 0)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		_putchar (c + '0');
	}
	}
	_putchar('\n');
	}
}
