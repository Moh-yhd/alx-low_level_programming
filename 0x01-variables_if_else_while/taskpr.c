#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int j;

    while (i <= 9)
    {
        j = 0;
        while (j <= 9)
        {
            if (i != j + 1)
            {
            printf("%d", i);
            printf("%d", j);
            }
            if (i + j < 18 && i != j + 1 && i != j + 1) //this works when the variables are int type using printf
            {
            printf(",");
            printf(" ");
            }
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}

