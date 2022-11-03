#include "main.h"

/**
 * factorial - return factorial of n
 * @n: the number
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 10)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
