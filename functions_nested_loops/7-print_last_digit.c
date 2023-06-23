#include "main.h"

/**
* print_last_digit - prints last digit
*
* @n: number to compute last digit for
*
* Return: last digit
*
**/


int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar (last_digit + '0');

	return (last_digit);
}
