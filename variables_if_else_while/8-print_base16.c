#include <stdio.h>

/**
 * main - Prints base 16
 * @void: Empty parameter list for main.
 *
 * Description: Prints all hexadecimals
 *
 * Return: 0 for success
 **/


int main(void)
{
	int i;

	for (i = 10; i <= 15; i++)
	{
		putchar(i + '0');
	}

	int c;

	for (c = 0; i <= 9; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n');
	return (0);
}
