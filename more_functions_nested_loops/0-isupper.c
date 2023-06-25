#include "main.h"

/**
 * _isupper - checks if value is upper case
 *
 * @c: variable to be checked
 *
 * _isupper: return 1 if uppercase and 0 if not
 *
 * return: 1 if c is uppercase and 0 if not
 **/



int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
