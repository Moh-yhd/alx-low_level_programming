#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: is an int array
 * @n: is an integer equal to the size of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, len;
	int rev[1000];

	len = n - 1;
	for (i = 0; i < n; i++)
	{
		rev[i] = a[len];
		len--;
	}
	for (j = 0; j < n; j++)
		a[j] = rev[j];
}
