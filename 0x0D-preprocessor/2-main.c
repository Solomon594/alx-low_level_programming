#include <stdio.h>

/**
 * main - prints the name of a file
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __fILE__);
	return (0);
}