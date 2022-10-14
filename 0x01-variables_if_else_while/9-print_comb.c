#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main- possible combination of single digit numbers"
*
* Return: zero is success
*/

int main(void)
{
	int a = '0';
	char co = ',';
	char sp = ' ';

	while (a >= '0' && a <= '9')
	{
		putchar(a);
		if (a <= '9')
		{
			putchar(co);
			putchar(sp);
		}
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
