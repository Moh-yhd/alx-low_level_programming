#include <stdio.h>

/**
 * main - prints the size of the data types in C
 *
 * Return: returns the value zero
 */
int main(void)
{
	printf("Size of a char:  %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("size of long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of long float: %zu bytes\n", sizeof(float));
	return (0);
}
