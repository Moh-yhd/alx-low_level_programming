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
	char start = 'a';
	char end = 'z';
	char ch = start;
	char start1 = 'A';
	char end1 = 'Z';
	char ch1 = start1;

	while (ch <= end)
	{
		putchar(ch);
		ch = ch + 1;
	}
	while (ch1 <= end1)
	{
		putchar(ch1);
		ch1 = ch1 + 1;
	}
	putchar('\n');
	return (0);
}
