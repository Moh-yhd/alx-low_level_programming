#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, k;
	char temp[100];

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			temp[k] = argv[i][j];
			k++;
		}
		printf("%s", temp);
		printf("\n");

	}
	return (0);
}
