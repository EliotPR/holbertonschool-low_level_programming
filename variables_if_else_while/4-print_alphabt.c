#include <stdio.h>




/**
 * main - Prints alphabet
 * @void: Empty parameter list for main.
 *
 * Description: Prints the alphabet in lower case
 * Skip q and e
 * Can only use putchar
 *
 * Return: 0 for success
 **/


int main(void)
{

	char letters = 'a';

		while (letters <= 'z')
		{
			if (letters == 'q')
			{
				letters++;
			}
			else if (letters == 'e')
			{
				letters++;
			}
			else
			{
				putchar(letters);
				letters++;
			}
		}
		putchar ('\n');
		return (0);
}
