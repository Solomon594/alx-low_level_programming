#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @c: the letter
 * Return: 1 for upper else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
