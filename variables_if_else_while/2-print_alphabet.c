#include <stdio.h>

/**
 * main - Prints alphabet
 * @void: Empty parameter list for main
 *
 * Description: Prints alphabet in lower case
 * Can only use putchat
 *
 * Return: 0 for success
 **/





int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
