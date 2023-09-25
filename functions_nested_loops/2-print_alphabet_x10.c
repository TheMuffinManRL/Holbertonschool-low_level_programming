#include "main.h"
/**
* print_alphabet_x10 - print alphabet x10 lowercase
*/
void print_alphabet_x10(void)
{
	int lines = 0;
	char letter;

		while (lines++ <= 9)
		{
			for (letter = 'a'; letter <= 'z'; letter++)
				_putchar(letter);
			_putchar('\n');
		}
}
