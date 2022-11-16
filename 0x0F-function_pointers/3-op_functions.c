#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: is an integer to be added
 * @b: is an integer to be added
 *
 * Return: the sum of the integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calcualtes the difference of two integers
 * @a: is an integer to be be subtraced from
 * @b: is an integer to be substraced from a
 *
 * Return: the difference of the integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: is an integer to be multiplied
 * @b: is an integer to be multiplied
 *
 * Return: the multiplication of the integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: is an integer to be dividend
 * @b: is an integer to be divser
 *
 * Return: the quatient of a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a division
 * @a: is an integer to be dividend
 * @b: is an integer to be diviser
 *
 * Return: the remaining of a division of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

