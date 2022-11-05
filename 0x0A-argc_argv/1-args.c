#include <stdio.h>
#include "main.h"

/**
 * main - print the number of prog
 * @argc: count arguments
 * @argv: argument
 * Return: always 1 on success
 */
int main(int argc, int *argv[])
{
	(void) argv;
	printf("%i\n", argv - 1);

		return (0);
}
