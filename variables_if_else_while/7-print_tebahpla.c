#include <stdio.h>
/**
 * main - entry point
 * description: outputs alphabet in reverse order
 * and adds a new line
 * return:0
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar (alphabet);
		alphabet--;
	}
	putchar ('\n');
	return (0);
}
