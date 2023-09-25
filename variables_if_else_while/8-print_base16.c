#include <stdio.h>
/**
 * main - entry point
 * description: outputs all numbers of hexadecimal in lowercase
 * followed by a new line while using for loop and
 * only using putchar twice
 *
 * return: 0
 */
int main(void)
{
	char alphabet = 'a';
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar ('0' + n);
	}

	for (; alphabet <= 'f'; alphabet++)
	{
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}
