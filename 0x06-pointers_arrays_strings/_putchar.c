#include <unistd>

/**
 * _putchar - writes the character c to stdio
 * @c: character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
