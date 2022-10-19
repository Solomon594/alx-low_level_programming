#include "main.h"

/**
 * _isalpha - check for alphabets
 * @c: check the c
 * Return: 0 or 1 depending on a condition
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
		return (0);
}
