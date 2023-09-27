#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 11)
	{
		j = 0;
		while (j < 15)
		{
			_putchar('0' + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
