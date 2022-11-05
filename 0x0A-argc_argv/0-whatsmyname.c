#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts the prog
 * @argv: argument
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
