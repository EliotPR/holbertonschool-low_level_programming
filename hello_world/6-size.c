#include <stdio.h>

/**
* main - Prints quote
*
* Return: zero on success
*
**/

int main(void)
{
	  printf("Size of an int: %d bytes(s)\n", sizeof(int));
	  printf("Size of a char: %d byte(s)\n", sizeof(char));
	  printf("Size of a float: %d byte(s)\n", sizeof(float));
	  printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	  printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	return (0);
}
