#include <stdio.h>

/**
 * main - entry
 * Return: always 0
 */
int main(void)
{
	int i;
	
	for(i = '0'; i < 10; i ++)
	{
		putchar('0' + i);
	}

	putchar("%c\n");
	return (0);
}
