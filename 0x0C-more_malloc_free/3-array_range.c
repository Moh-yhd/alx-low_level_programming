#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of range of integers
 * @min: minimum member of the array
 * @max: maximum member of the array
 *
 * Return: pointer to an array if success
 * NULL if failure
 */
int *array_range(int min, int max)
{
	int i, range;
	int *ar;

	if (min > max)
		return (NULL);
	else if (min == max)
	{
		ar = malloc(sizeof(int));
		if (ar == NULL)
			return (NULL);
		ar[0] = min;
	}
	else
	{
		range = max - min;
		ar = malloc((range + 1) * sizeof(int));
		if (ar == NULL)
			return (NULL);
		for (i = 0; i <= range; i++)
		{
			ar[i] = min;
			min++;
		}
	}
	return (ar);
}

