#include <stdio.h>

/**
 * Main - Prints alphabet
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

	do(lowletter <= 'z')	{
		putchar(lowletter);
	}
	while (uppletter <= 'Z')
	{
		putchar(upletter);
	}

	putchar ('\n');
	return (0);
}
