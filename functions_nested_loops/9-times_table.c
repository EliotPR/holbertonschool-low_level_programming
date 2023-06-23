#include "main.h"

/**
 * times_table - prints times table up to 9
 *
 * Return: void
 **/


void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{

	char ch = i * j + '0';

	_putchar(ch);

	if (j != 9)
	{
	_putchar(',');
	}
		_putchar('\n');
	}
	}
}
