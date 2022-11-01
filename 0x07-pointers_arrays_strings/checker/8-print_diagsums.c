#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - prints the diagonal sum
 * @a: is the two d square array
 * @size: is size of the square array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + *(a + (size * i + j));
			if (i + j == size - 1)
				sum2 = sum2 + *(a + (size * i + j));
		}
	}
	printf("%d, %d\n", sum1, sum2);
}

