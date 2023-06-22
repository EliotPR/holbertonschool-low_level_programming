#include <stdio.h>

/**
 * main - writes 0-9
 * @void: Empty parameter list for main.
 *
 * Description: all combinations of single-digit numbers with comma and space
 *
 * Return: 0 for success
 **/


int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
	if (i != 8)
	{
	putchar(i + '0');
	putchar(',');
	putchar(' ');

	}
	}
	return (0);
}
