#include "holberton.h"

/**
  * reset_to_98 - Updates the value it points to 98
  * @n: pointer to n
  *
  * Return: void
*/
void reset_to_98(int *n)
{
	int n;
	n = 402;	
	printf("n=%d\n", n);
	int *n = &n;
	*n = 98;
	printf("n=%d\n", n);
	return (0);
}
