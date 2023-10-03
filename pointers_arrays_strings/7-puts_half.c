#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints last half of string
 * @str: string given
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len - 1) / 2;

	n++;

	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
