#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* to test positive or negative integer
 * void positive_or_negative(int i)
 * return 0
*/
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}

/** end of main test*/
