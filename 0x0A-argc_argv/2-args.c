#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the prog
 * @argc: counts the prog
 * @argv: argumets
 * Return: always 1 on success
 */
int main(int argc, int *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%S\n", argv[count]);
			count++;
		}
		return (0);
	}
}
