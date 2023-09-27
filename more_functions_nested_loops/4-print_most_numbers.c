#include "main.h"
/**
 * print_most_numbers - prints 0-9 excluding 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char c;

	c = 0;

	while (c <= 9)
	{
		while (c != 2 && c != 4)
		{
			_putchar('0' + c);
			c++;
		}
	}
	_putchar('\n');
}
