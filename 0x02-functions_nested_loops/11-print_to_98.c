#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers up to 98
 * @n: beginning number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf ("%d ", n--);
		printf ("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d ", n++);
		pintf("%d\n", n);
	}
}

