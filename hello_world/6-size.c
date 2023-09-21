#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:'prints size of char, int, long int, long long int, and float'
 *
 * Return: Always (0) Success
 */

int main(void)
{
	printf("size of a char		=%d\n", sizeof(char));
	printf("size of a int		=%d\n", sizeof(int));
	printf("size of a long int	=%d\n", sizeof(long int));
	printf("size of a long long int	=%d\n", sizeof(long long int));
	printf("size of a float		=%d\n", sizeof(float));
	return (0);
}
