#include <stdio.h>
/**
 * main - entry point
 * description: outputs zero to nine using putchar
 * Return:0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (0 + n);
	}
	putchar('\n');
	return (0);
}
