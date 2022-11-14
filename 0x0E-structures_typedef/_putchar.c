#include <unistd.h>

/**
 * _putchar - prints character to stdio
 * @c: the character
 *
 * Return: on proces 1, error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
