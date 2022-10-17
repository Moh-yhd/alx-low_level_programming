#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints all possbile combinations of single digit numbers"
 *
 * Return: zero is success
*/

int main(void)
{
	int i = 48;
	int j;
	int k;
	int co = ',';
	int sp = ' ';

	while (i >= 48 && i <= 57)
	{
		j = 48;
		while (j >= 48 && j <= 57)
		{
			k = 48;
			while (k >= 48 && k <= 57)
			{
			if (i < j && j < k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
			}
			if (i + j + k < 168 && i < j && j < k)
			{i
				putchar(co);
				putchar(sp);
			}
			k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
