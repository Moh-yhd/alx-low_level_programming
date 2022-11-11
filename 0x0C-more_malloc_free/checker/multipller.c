#include <stdio.h>
#include <stdlib.h>

int main(int __attribute__ ((unused)) argc, char **argv)
{
	int i, j;
	char c;
	int len1 = 0, len2 = 0;
	int *num1, *num2;
	int *mul;

	while(*(argv[1] + len1) != '\0')
		len1++;
	while(*(argv + len2) != NULL)
		len2++;

	num1 = malloc(len1 * sizeof(int));
	num2 = malloc(len2 * sizeof(int));
	for (i = 0, j = 0; i < len1; i++, j++)
		num1[j] = argv[1][i] - '0';
	for (i = 0, j = 0; i < len2; i++, j++)
		num2[j] = argv[2][i] - '0';
	
	printf("len1 = %d, len2 = %d\n", len1, len2);
	printf("%d\n", num2[1] + num2[2]);
	printf("%c\n", argv[1][1]);
	c = argv[2][1];
	printf("%c\n", c);
	return (0);
}

	
