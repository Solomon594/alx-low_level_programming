#include "main.h"
#include <unistd.h>

/**
*_putchar - writes will write a character to stdout
*@c: character to be printed
*Return: 1 on success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
