#include "main.h"
/**
 * _isdigit - Check to see if given character is a digit between one and nine
 * @c: Character to be tested
 *
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
