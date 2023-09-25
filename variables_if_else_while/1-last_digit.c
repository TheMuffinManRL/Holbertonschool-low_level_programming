#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * n - random number
 * ld - last digit of random number
 *
 * Description: This will take the last digit of a
 * random number and print strings based of if it
 * is less than six and not zero...greater than five
 * or equal to zero
 * Return:0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = (n % 10);
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
