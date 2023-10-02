#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: variable one
 * @b: variable two
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
