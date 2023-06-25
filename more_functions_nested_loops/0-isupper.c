#include "main.h"

/**
 * _isupper - checks if value is upper case
 *
 * @c: character to be checked
 *
 * return: 1 if c is uppercase and 0 if not
 **/
 


int _isupper (int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
