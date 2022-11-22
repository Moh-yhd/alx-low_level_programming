#include <stdio.h>
#include <stdlib.h>
int _puts_int(int a)
{
	int len = 0;
	if (a < 0)
	{
		a = -a;
		len++;
	}

	if (a > 0)
		len++;
	while (a / 10 > 0)
	{
		len++;
		a = a / 10;
	}

	return(len);
}
int main(void)
{
	int a = 12345;
	int b = -12345;
	int c = _puts_int(a);
	int d = _puts_int(b);
	
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
}
