#include "main.h"



/**
 *print_alphabet_x10 - print lowercase times 10
 */

void print_alphabet_x10(void)
{
	int k;
	char v;

	for (k = '0'; k <= '9'; k++)
	{
		for (v = 'a'; v <= 'z'; v++)
			_putchar(k);
		_putchar('\n');
	}
}
