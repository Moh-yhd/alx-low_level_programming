#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat(NULL, NULL, 50);
    printf("%s\n", concat);
    free(concat);
    printf("%lu\n",strlen(concat));
    return (0);
}
