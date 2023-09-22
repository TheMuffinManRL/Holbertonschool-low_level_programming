#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a random number
 * if last digit is greater than five prints string
 * if last digit is less than six prints string
 * if last digit is equal to zero prints string
 * @n is random number
 * @i is remainder of number divided by ten
 *
 * return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int LD;

	LD = n % 10;
	return (LD);

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LD);
	}
	if (n < 6; n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LD);
	}
	return (0);
}
