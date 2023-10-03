#include "main.h"
/**
 * puts2 - prints every other char starting at the first
 * @str: given string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if ((i + 1) % 2)
			_putchar(str[i]);
	_putchar('\n');
}
