#include <stdio.h>
#include "main.h"

/**
 * main - print the number of prog
 * @argc: count arguments
 * @argv: argument
 * Return: always 1 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

		return (0);
}
