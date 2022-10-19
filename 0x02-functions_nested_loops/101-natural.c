#include <stdio.h>

/**
 * main - this function prints the sum of the multiples of 3 or 5 up to 1024
 *
 * Return: returns zero if success
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
