#include <stdio.h>
/**
 * main - entry point
 * alphabet - assigning value to a
 * @a: starting point to loop
 *
 * Description: This while loop will display the alphabet
 * from a - z in lowercase letters ending with a new line
 * return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')

	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
