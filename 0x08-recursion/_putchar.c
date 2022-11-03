#include <unistd.h>

/**
 * _purchar - prints 
 * @c: character to print
 * Return: value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
