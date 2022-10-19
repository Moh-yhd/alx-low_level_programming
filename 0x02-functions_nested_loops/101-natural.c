#include <stdio.h>

/**
 * print_times_table - this function prints the multiplication table up to n
 *
 * Retrun: void
 */

int main(void)
{
	int i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d", i);
			printf("\n");
		}
		i++;
	}
}
