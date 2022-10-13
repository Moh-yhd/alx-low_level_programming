#include <stdio.h>

/**
 * main - prints the size of the data types in C
 *
 * Return: returns the value zero
 */
int main(void)
{
	printf("The size of a char:  %zu bytes\n", sizeof(char));
	printf("The size of int: %zu bytes\n", sizeof(int));
	printf("The size of long int: %zu bytes\n", sizeof(long int));
	printf("The size of long long int: %zu bytes\n", sizeof(long long int));
	printf("The size of long float: %zu bytes\n", sizeof(float));
	return (0);
}
