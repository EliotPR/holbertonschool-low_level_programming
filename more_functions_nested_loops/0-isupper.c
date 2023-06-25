#include "main.h"

/**
 * _isupper - Checks if value is upper case
 * @c: Variable to be checked
 * Return: 1 if c is uppercase and 0 if not
 **/



int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
