#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	char c;

	int i = 0;

	while (i < 11)
	{
		c = 0;
		while (c < 15)
		{
			_putchar('0' + c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
