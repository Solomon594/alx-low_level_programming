#include <stdio.h>

/**
 * main - entry
 * return: always 0
 */
int main(void)
{
	int i
	char j

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');
		return (0);
}
