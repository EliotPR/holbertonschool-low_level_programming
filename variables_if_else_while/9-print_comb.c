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
		int num = 48;

		while (num < 58)
		{
			putchar(num);
			if (num < 57)
			{
				putchar(',');
				putchar(' ');
			}
			num++;
		}
		putchar('\n');
		return (0);
}
