#include <stdio.h>

/**
 * main - Prints alphabet
 * @void: Empty parameter of main
 *
 * Description: Prints alphabet lowe and uppercase
 * Can use only 3 putchar
 *
 * Return: 0 for success
 **/


int main(void)
{
	char lowletter = 'a';
	char uppletter = 'A';

	while (lowletter <= 'z')
	{
		putchar(lowletter);
		lowletter++;
	}
	while (uppletter <= 'Z')
	{
		putchar(uppletter);
		uppletter++;
	}

	putchar ('\n');
	return (0);
}
