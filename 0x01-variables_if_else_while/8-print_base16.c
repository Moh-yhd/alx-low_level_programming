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
	int dS = '0';
	int dE = '9';
	int dig = dS;
	char start1 = 'a';
	char end1 = 'f';
	char ch1 = start1;

	while (dig <= dE)
	{
		putchar(dig);
		dig = dig + 1;
	}
	while (ch1 <= end1)
	{
		putchar(ch1);
		ch1 = ch1 + 1;
	}
	putchar('\n');
	return (0);
}
