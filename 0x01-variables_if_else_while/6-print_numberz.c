#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main- checks if a random number is a positive, a negative or zero"
*
* Return: zero is success
*/

int main(void)
{
	int a = '0';

	while (a >= '0' && a <= '9')
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
