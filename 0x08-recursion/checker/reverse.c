#include <stdio.h>

char *str_reverser(char *s);
int main (void)
{
	char *s = "The quick brown fox";

	printf("%c\n", *str_reverser(s));
	return (0);
}

char *str_reverser(char *s)
{
	char *rev[1000];

	if (*s != '\0')
	{
		*rev = str_reverser(s + 1);
	}
	else
	{
		return (*rev);
	}
}

