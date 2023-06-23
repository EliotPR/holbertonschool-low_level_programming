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

	printf("%d, ", i * j);

	}
		printf('\n');
	}
}
