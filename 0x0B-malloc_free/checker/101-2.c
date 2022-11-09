#include "main.h"
#include <stdlib.h>

/**
 * strtow - concatenates words together
 * @str: is a string
 * Return: pointer to a memory location
 */
char **strtow(char *str)
{
	int i, j, k, nonspace_len = 0, num_words = 0, char_count = 0;
	int *word_len;
	char *temp;
	char **ar;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			nonspace_len++;
			if (str[i + 1] == 32 || str[i + 1] == '\0')
				num_words++;
		}
	}
	word_len = malloc(num_words * sizeof(int));
	temp = malloc(nonspace_len * sizeof(char));
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			temp[j] = str[i];
			j++;
		}
	}
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			char_count++;
			if (str[i + 1] == 32 || str[i + 1] == '\0')
			{
				word_len[j] = char_count;
				j++;
				char_count = 0;
			}
		}
	}
	ar = malloc((num_words + 1) * sizeof(char *));
	for (i = 0; i < num_words; i++)
	{
		ar[i] = malloc(word_len[i] * (sizeof(char) + 1));
	}
	for (i = 0, k = 0; i < num_words; i++)
	{
		for (j = 0; j < word_len[i]; j++)
		{
			ar[i][j] = temp[k];
			k++;
		}
		ar[i][j] = '\0';
	}
	return (ar);
{
	int i, j, char_count = 0;
	int *word_len;

	word_len = malloc(num_words * sizeof(int));
	for (i = 0; j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			char_count++;
			if (str[i + 1] == 32 || str[i + 1] == '\0')
			{
				word_len[j] =  char_count;
				j++;
				char_count = 0;
			}
		}
	}
	return (word_len);
}
