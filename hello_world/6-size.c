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

	printf("size of a char: %ld byte(s)\n", (unsigned long) sizeof(char));
	printf("size of an int: %ld byte(s)\n", (unsigned long) sizeof(int));
	printf("size of a long int: %ld byte(s)\n", (unsigned long) sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long) sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", (unsigned long) sizeof(float));
	return (0);
}
