#include <stdio.h>
/**
 * main - entry point
 * description: prints alphabet from a to z
 *
 * return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')

	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
