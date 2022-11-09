#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *number;

	number = malloc(4 * sizeof(int));
	number[0] = 1;
	number[1] = 2;
	number[2] = 3;
	number[3] = 4;
	printf("%ld\n", sizeof(*number));
	return(0);
}
