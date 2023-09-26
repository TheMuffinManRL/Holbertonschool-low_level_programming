#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: 0
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
