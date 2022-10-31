#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stout
 * @c: character to be printed
 *
 * Return: on 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
