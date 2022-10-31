#include "main.h"

/**
 * _memcpy - coph n bytes from memory
 * @dest: destination
 * @src: source
 * @n: numer of bytes
 * Return: thre destination to the pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int nd;
	unsigned char *destination =  dest;
	const unsigned char *source = src;

	for (ind = 0; ind < n; ind++)
		destination[ind] = source[ind];

	return (dest);
}
