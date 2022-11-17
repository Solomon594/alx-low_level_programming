#include "function_pointers.h"

/**
 * int_index - search int
 * @array: aray
 * @size: size
 * @cmp: pointer co cimparing func
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[1] != 0))
				return (i);
		}
	}
	return (-1);
}
