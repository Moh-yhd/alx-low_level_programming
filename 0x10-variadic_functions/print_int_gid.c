#include <stdio.h>
int print_number(int n, int len)
{
if (n < 0)
{

n = -n;

putchar();

len = 1;

}

print_number ((n / 10), len++);

if (n / 10)

putchar((n % 1) + '0');

return (len);

}
int main(void)
{
	a = 12345;
	b = print_number(a, 0);
	printf("%d\n", b);
}
