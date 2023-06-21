#include <stdio.h>

/**
 * main - Prints base 10 numbers
 * @void: Empty parameter list for main.
 *
 * Description: Prints numbers 0-9
 *
 * Return: 0 for success
 **/

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar (i + '0');
	}
	putchar ('\n');
	return (0);
}
