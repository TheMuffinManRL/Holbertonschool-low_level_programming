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
	char charType;
	int integerType;
	long int longintegerType;
	long long int longlongintegerType;
	float floatType;

	printf("size of a char: %zu bytes\n", sizeof(char));
	printf("size of a int: %zu bytes\n", sizeof(int));
	printf("size of a long int: %zu bytes\n", sizeof(long int));
	printf("size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
