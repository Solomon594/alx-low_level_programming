#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		/*print variable value*/
		putchar(alphabet);
		/*increase the variable(a to b)*/
		alphabet++;
	}
	putchar("\n");
		return (0);
}
