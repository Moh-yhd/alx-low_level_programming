#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string in reverse
 * @s: is a string
 * Return: returns nothing
 */

int main()
{
	char s[] = "My school";
	int i = 0;
	int j;
	int k;
	
	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	char rev[i];

	for (j = 0; j < k; j++)
	{
		rev[j] = s[i];
		i--;
	}
	rev[j] = '\0';
	printf("%s\n", rev);
}
