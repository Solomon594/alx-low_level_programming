#include "main.h"
#include <stdio.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locate the index marking the end of first word
 * @str: the string to be searched
 * Return: the index marking end of initial pointer
 */
int word_len(char *str)
{
	int index = 0;
	int len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - counts the number of words
 * @str: the string
 * Return: the number of words
 */
int count_words(char *str)
{
	int index = 0, word = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			word++;
			index += word_len(str + index);
		}
	}
	return (word);
}

/**
 * strtow - splits string into words
 * @str: the string
 * Return: the string
 */
char **strtow(char *str)
{
	char **string;
	int index = 0;
	int word;
	int w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	word = count_word(str);
	if (word == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);
	for (w = 0; w < word; w++)
	{
		while (str[index] == ' ')
			index++;

		letter = word_len(str + index);
		string[w] = malloc(sizeof(char) * (letter + 1));
		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);
			free(string);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
			string[w][l] = str[index++];

				string[w][l] = '\0';
	}
	string[w] = NULL;
	return (string);
}
