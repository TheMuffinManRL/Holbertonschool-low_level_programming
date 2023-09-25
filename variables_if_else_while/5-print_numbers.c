#include <stdio.h>
/**
 * main - entry point
 * description: prints out numbers zero through nine in integers
 * Return: Always (0) Success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');
	return (0);
}
