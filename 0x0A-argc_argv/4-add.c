#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the programs's name
 * @argc: is the number of arguments to the main
 * @argv: an array containg pointers to the argument strings
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i, j;
	int flag = 0;
	int temp, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
				temp = atoi(argv[i]);
				sum = sum + temp;
			}
			else
			{
				flag = 1;
				printf("Error\n");
				return (1);
			}
		}
		if (flag == 1)
			break;
	}
	printf("%d\n", sum);
	}
	return (0);
}
