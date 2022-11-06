#include "main.h"

/**
 * _memset - fill first n bytes
 * @n: number of bytes to be filled
 * @b: character
 * @s: pointer to memory
 * Return: pointer to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;
	unsigned char *mem = s, val = b;

	for (ind = 0; ind < n; ind++)
		mem[ind] = val;

	return (mem);
}
