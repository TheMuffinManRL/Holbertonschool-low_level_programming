#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: string given
 * Return: (len)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
