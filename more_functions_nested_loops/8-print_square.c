#include "main.h"
/**
 * print_square - uses # to print squares
 * @size: size of square to be printed
 *
 */
void print_square(int size)
{
	int j = 0;

	while (j < size)
	{
		int k = 0;

		while (k < size)
		{
			_putchar(35);
			k++;
		}
		_putchar('\n');
		j++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
