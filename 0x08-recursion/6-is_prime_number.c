#include "main.h"

/**
 * evaluate_num - recursion loop
 * @num: number
 * @iterator: iterator
 * Return: 1 or 0
 */
int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}
	else if (num % iterator != 0)
	{
		return (evaluate(num, iterator + 1));
	}
	return (0);
}

/**
 * is_prime_number - returns 1 if a prime number, otherwise return 0
 * @n: number
 * Return: a 1 or 0
 */
int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	if (num < 2)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	return (evaluate_num(num, iterator));
}
