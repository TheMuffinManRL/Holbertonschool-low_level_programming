#include "main.h"
/**
 * _strlen - returns length of string
 * @s: given string
 *
 * Return: (i)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - reverses string
 * @s: string given
 */
void rev_string(char *s)
{
	int i, len;
	char a;

	len = _strlen(s) - 1;
	for (i = len; i > len / 2; i--)
	{
		a = s[i];
		s[i] = s[len - i];
		s[len - i] = a;
	}
}
