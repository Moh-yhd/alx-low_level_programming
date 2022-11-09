#include "main.h"
#include <stdlib.h>

/**
 * strtow - concatenates words together
 * @str: is a string
 * Return: pointer to a memory location
 */
char **strtow(char *str)
{
	int i, j, k, nonspace_len = 0, num_words;
	int *word_len;
	char *temp;
	char **ar;

	if (str == NULL)
		return (NULL);
	nonspace_len = num_nonspace(str);
	num_words = num_words_calc(str);
	word_len = num_words_len(str);
	temp = malloc(nonspace_len * sizeof(char));
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			temp[j] = str[i];
			j++;
		}
	}
	ar = malloc((num_words + 1) * sizeof(char *));
	if (ar == NULL)
	{
		return (NULL);
		free(ar);
	}
	for (i = 0; i < num_words; i++)
	{
		ar[i] = malloc(word_len[i] * (sizeof(char)) + 1);
		if (ar[i] == NULL)
		{
			return (NULL);
			for (; i >= 0; i--)
				free(ar[i]);
		}
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
}

/**
 * num_words_len - calculate the number of words and in a string and
 * their length.
 * @str: is a string
 * Return: pointer to an array
 */
int *num_words_len(char *str)
{
	int i, j, char_count = 0, num_words = 0;
	int *word_len;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			if (str[i + 1] == 32 || str[i + 1] == '\0')
				num_words++;
		}
	}
	word_len = malloc(num_words * sizeof(int));
	for (i = 0, j = 0; str[i] != '\0'; i++)
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

/**
 * num_words_calc - calculates the number of words in a string
 * @str: is a string
 * Return: integer - num of words
 */
int num_words_calc(char *str)
{
	int i, num_words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			if (str[i + 1] == 32 || str[i + 1] == '\0')
				num_words++;
		}
	}
	return (num_words);
}
/**
 * num_nonspace - calculates the number of nonspace charachters
 * @str: is a string
 * Return: int - the number of non space chars
 */

int num_nonspace(char *str)
{
	int i,  nonspace = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
			nonspace++;
	}
	return (nonspace);
}
