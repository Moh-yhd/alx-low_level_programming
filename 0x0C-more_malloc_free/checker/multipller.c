#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: is the number of arguments passed to main
 * @argv: an array of pointers to the arguments(numbers to be multiplied
 * Return: 0 if success.
 */

int **alloc_grid(int width, int height);
int *alloc_width(int width);

int main(int __attribute__ ((unused)) argc, char **argv)
{
	int i = 0, j = 0, k, l, len1, len2, height, width;
	int *num1, *num2, *mul;
	int **grid;

	while(*(argv[1] + i) != '\0')
		i++;
	while(*(argv[2] + j) != '\0')
		j++;
	if (i >= j)
	{
		len1 = i;
		len2 = j;
	}
	else
	{
		len1 = j;
		len2 = i;
	}
	height = len1;
	width = (2 * len1) - (len2 - len1);
	num1 = alloc_width(width);
	num2 = alloc_width(height);
	for (i = 0, j = 0; i < len1; i++, j++)
		num1[j] = argv[1][i] - '0';
	for (i = 0, j = 0; i < len2; i++, j++)
		num2[j] = argv[2][i] - '0';
	grid = alloc_grid(width, height);
	for (i = 0, k = 0; i < height && k < height; i++, k++)
	{
		for (j = 0, l = 0; j < (width) && l < (width); j++, l++)
		{
			grid[k][l] = num1[j] * num2[i];
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			printf("%d ", grid[i][j]);
		printf("\n");
	}
	for (j = 0; j < width; j++)
		printf("%d", num1[j]);
		printf("\n");

	return (0);
}




/**
 * alloc_grid - allocates a memory for a two
 * dimenaional allar and fills it with zero.
 * @width: is the width of the memory grid
 * @height: is the height if the memory gris
 *
 * Return: integer pointer to the allocated memory grid
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
int *alloc_width(int width)
{
	int *ar;
	int i;

	ar = malloc(width * sizeof(int));
	for (i = 0; i < width; i++)
		ar[i] = 0;
	return (ar);
}
