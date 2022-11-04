#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an
 * amount of money. Available value of coins: 25, 10, 5, 2, 1
 * @argc: is the number of arguments to the main
 * @argv: an array containg pointers to the argument strings
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int m, coins;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	m = atoi(argv[1]);
	if (m < 0)
	{
	printf("0\n");
	}
	else
	{
	coins = m / 25 + (m % 25) / 10 + ((m % 25) % 10) / 5 +
		(((m % 25) % 10) % 5) / 2 + ((((m % 25) % 10) % 5) % 2);
	printf("%d\n", coins);
	}
	}
	return (0);
}
