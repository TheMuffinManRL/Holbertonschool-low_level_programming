#include <stdio.h>
/**
 * main - entry point
 *
 * return: 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
