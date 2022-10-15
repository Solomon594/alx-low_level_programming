#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alphabet;
	char ch;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);

	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
