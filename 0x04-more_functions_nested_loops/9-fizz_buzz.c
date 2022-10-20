#include <stdio.h> 

/**
 * main - prints the numbers 1-100; for multiples of 3  prints Fizz and for multiples of five 
 * print Buzz; For numbers which are multiples of both three and five print FizzBuzz
 * Return: returns zero if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d", i);
			printf(" ");
		}
		else
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
				printf(" ");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
				printf(" ");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
				printf(" ");
			}
		}
	}
	printf("\n");

	return (0);
}
