#include "main.h"

/**
 * _strpbrk - searches a string for any set of byte
 * @s: the string to be seached
 * @accept: the set of bytes to be searched for
 *
 * Return: if matched or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
				return (s);
		}
		s++;
	}
	return ('\0');
}
