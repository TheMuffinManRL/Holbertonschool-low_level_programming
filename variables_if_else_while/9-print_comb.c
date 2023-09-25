#include <stdio.h>
/**
 * main - entry point
 * description: prints numbers zero through nine
 * seperated by a comma and a space
 * return:0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9 ; n++)
	{
		putchar ('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
