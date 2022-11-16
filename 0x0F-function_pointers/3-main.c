#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - do basic operations
 * @argc: number of arguments passed to main
 * @argv: pointer to the pointer of argument strings passed to main
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int num1, num2, calc;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][0] != 37 && argv[2][0] != 42 && argv[2][0] != 43 &&
			argv[2][0] != 45 && argv[2][0] != 47)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);


	return (0);
}




