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

	while (ch <= end)
	{
		putchar(ch);
		if (ch == 'd')
		{
			ch = ch + 1;
		}
		if (ch == 'p')
		{
			ch = ch + 1;
		}
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
