#include "main.h"

/**
 * _evaluate - return square root of a number
 * @n: integer
 * @i: integer
 * Return: the square root
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == 1)
		return (1);

		return (-1);
		return (-1);
}

/**
 * _sqrt_recursion - evaluates sqrt
 * @n: integer
 * Return: sqrt recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (_evaluate(1, n));
}
