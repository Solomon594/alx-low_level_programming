#include "main.h"

/**
 * rev_string - reversed string
 * @s: input
 * Return: reversed string
 */
void rev_string(char *s)
{
	char tt = s[0];
	int c =  0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		tt = s[i];
		s[i] = s[c];
		s[c] = tt;
	}
}
