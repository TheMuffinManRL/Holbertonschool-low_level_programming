#include <stdio.h>
/**
 * main - entry point
 * description: outputs zero to nine using putchar
 * Return:0
 */
int main(void)
{
	char n = '0';

	for (; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar('\n');
	return (0);
}
