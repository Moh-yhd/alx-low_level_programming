#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = '0';
    int j;

    while (i <= '0')
    {
        j = '0';
        while (j <= '9')
        {
           
	if (i != j + '1')
            putchar(i);
            putchar(j);
           
            if (i < '9' && j < '9' && i != j + 1 && i != j + 1) //this works when the variables are int type using printf
            {
            putchar(44);
            putchar(32);
            }
            j = j + 1;
        }
        i = i + 1;
    }
    putchar("\n");
    return 0;
}
