#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: creates random number
 * If number is positive prints n is positive
 * If n is equal to zero print n is zero
 * If negative print n is negative
 *
 * Return - Always (0) (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 1)
	{
		printf("%d is positive\n", n);
	}
	if (n < 1)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
