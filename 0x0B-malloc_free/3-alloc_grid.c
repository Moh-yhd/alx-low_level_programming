#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
		free(ar);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ar[i]);
			return (NULL);
		}
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
