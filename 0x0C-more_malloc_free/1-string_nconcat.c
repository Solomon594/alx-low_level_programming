#include "main.h"

/**
 * string_nconcat - concats two strings
 *  @s1: first
 *  @s2: second
 *  @n: index
 *  Return: concat char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (size1 == NULL)
		s1 = ' ';
	if (size2 == NULL)
		s2 = ' ';
	wile (s1[size1] != '\0')
	{
		size1++;
	}
	if (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
	{
		n = size2;
		p = malloc((size1 + n + 1) * (sizeof(char));
				}
				if (p == NULL)
				{
				return (0);
				}
				for (i = 0; i < size1; i++)
			{
			p[i] =s1[i];
			}

			for (; i < (size1 + n); i++)
			{
			p[i] = s2[i - size1];
			}
			p[i] = '\0';

			return (p);
			}
