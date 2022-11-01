#include "main.h"

/**
 * _strspn - get length
 * @s: string to be searched
 * @accept: prefix
 * Return: no of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
			{
				bytes++;
				break;
			}
			else if (accept[ind + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
