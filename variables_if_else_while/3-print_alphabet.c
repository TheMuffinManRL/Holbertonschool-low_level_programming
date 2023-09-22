#include <stdio.h>
/**
 * main - entry point
 * description: prints alphabet from a to z
 * then prints alphabet in caps from A to Z
 *
 * return: 0
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (alphabet <= 'z')

	{
		putchar(alphabet);
		alphabet++;
	}

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
