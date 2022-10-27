#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: is an int array
 * @n: is an integer equal to the size of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int rev[1000];

	for (i = 0, i < n; i++)
	{
		rev[j] = a[n - 1];
		n--;
	}
	for (j = 0; rev[j] != '\0'; j++)
		a[j] = rev[j];
}
