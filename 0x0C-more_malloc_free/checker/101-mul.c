#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates a memory for a 2d array and
 * initializes it with zero.
 * @width: is width if the 2d array.
 * @height: is height of the 2d array
 *
 * Return: a pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	ar = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}

/**
 * alloc_width - allocates a memory for a 1d array
 * and initializes it with zero
 * @width: is number of integers the array will hold
 * Return: returns a pointer to the memory location
 * */
int *alloc_width(int width)
{
	int *ar;
	int i;

	ar = malloc(width * sizeof(int));
	for (i = 0; i < width; i++)
		ar[i] = 0;
	return (ar);
}

/**
 * pop_one_d - populates a 1d array with integers
 * converted from char
 * @ar: is the array to be populated
 * @ar2: is the array containing char digits that will
 * populate ar
 * @l: is the size of the arrays
 *
 * Return: pointer to an int populated array
 */
int *pop_one_d(int *ar, char **argv, int flag)
{
	int  i = 0, j = 0, k, l;

	while(*(argv[1] + i) != '\0')
		i++;
	while(*(argv[2] + j) != '\0')
		j++;
	if (flag == 0)
	{
		if (i < j)
		{
			for (k = 0, l = 0; k < i; k++, l++)
				ar[l] = argv[1][k] - '0';
		}
		else 
		{
			for (k= 0, l = 0; k < j; k++, l++)
				ar[l] = argv[2][k] - '0';
		}
	}
	else if (flag == 1)
	{
		if (i > j)
		{
			for (k = 0, l = 0; k < i; k++, l++)
				ar[l] = argv[1][k] - '0';
		}
		else
		{
			for (k = 0, l = 0; k < j; k++, l++)
				ar[l] = argv[2][k] - '0';
		}
	}
		return (ar);
}


/**
 *
 *
 *
 *
 *
 */

int **grid_adj(int **grid, int **ord, int height, int width)
{
	int i, j, k, l;
	int carry = 0;

	for (i = 0, k = 0; i < height && k < height; i++, k++)
	{
		for (j = width - 1, l = width - 1; j >= 0 && l >= 0; j--, l--)
		{
			ord[k][l] = (carry + grid[i][j]) % 10;
			carry = (carry + grid[i][j]) / 10;
		}
		carry = 0;
	}
	return (ord);
}
int **grid_pop(int **grid, int *num1, int *num2, int height, int width)
{
	int i, j, k, l;

	for (i = 0, k = 0; i < height && k < height; i++, k++)
	{
		for (j = 0, l = k + 1; j < width && l < width; j++, l++)
		{

			grid[k][l] = (num1[i] * num2[j]);
		}
	}
	return(grid);
}

/**
 *
 *
 *
 */
int max_len(char **argv)
{
	int i, j;

	while(*(argv[1] + i) != '\0')
		i++;
	while(*(argv[2] + j) != '\0')
		j++;
	if (i >= j)
	{
		return (i);
	}
	else
	{
		return (j);
	}
}

/**
 *
 *
 *
 */
int min_len(char **argv)
{
	int i, j;

	while(*(argv[1] + i) != '\0')
		i++;
	while(*(argv[2] + j) != '\0')
		j++;
	if (i < j)
	{
		return (i);
	}
	else
	{
		return (j);
	}
}




/**
 * main - multiplies two positive numbers
 * @argc: is the number of arguments passed to main
 * @argv: an array of pointers to the arguments(numbers to be multiplied
 * Return: 0 if success.
 */
int main(int __attribute__ ((unused)) argc, char **argv)
{
	int i = 0, j = 0, carry = 0, k, l, len1, len2, height, width;
	int *num1, *num2, *mul, *res;
	int **grid, **ord;
	
	len1 = max_len(argv);
	len2 = min_len(argv);
	height = len1;
	width = (2 * len1) - (len2 - len1);
	num1 = alloc_width(width);
	num2 = alloc_width(height);
	mul = alloc_width(width);
	res = alloc_width(width);
	num1 = pop_one_d(num1, argv, 1);
	num2 = pop_one_d(num2, argv, 0);
	grid = alloc_grid(width, height);
	grid = grid_pop(grid, num1, num2, height, width);
	ord = alloc_grid(width, height);
	ord = grid_adj(grid, ord, height, width);

	for (i = 0; i < height; i++)
	{
		for (j = 0, k = 0; j < width; j++, k++)
			mul[k] = mul[k] + ord[i][j];
	}
	carry = 0;
	for (i = width - 1; i >= 0; i--)
	{
		res[i] = (carry + mul[i]) % 10;
		carry = (mul[i] + carry) / 10;
	}
	for (i = 0; i < width; i++)
		printf("%d ", res[i]);
		printf("\n");

	return (0);
}
