#include <stdio.h>

/**
 * main - prints the size of the data types in C
 *
 * Return: returns the value zero
 */
int main(void)
{
	printf("Size of a char:  %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a long float: %zu byte(s)\n", sizeof(float));
	return (0);
}
