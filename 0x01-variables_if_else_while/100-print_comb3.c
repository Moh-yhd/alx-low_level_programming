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
	int co = ',';
	int sp = ' ';

	while (i >= 48 && i <= 57)
	{
		j = 48;
		while (j >= 48 && j <= 57)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
			}
			if (i + j < 113 && i < j)
			{
				putchar(co);
				putchar(sp);
			}
			j = j + 1;
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
