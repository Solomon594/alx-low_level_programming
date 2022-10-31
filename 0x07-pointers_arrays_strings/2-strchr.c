#include "main.h"

/**
 * _strchr - locate characterb in string
 * @s: sting
 * @c: character
 * Return: found or NULL
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; ind[s] >= '\0'; ind++)
	{
		if (s[ind] == c)
			return (s + ind);
	}
	return (0);
}
