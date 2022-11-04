#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguements you passed into it.
 * @argc: an argument counter.
 * @argv: an argument values.
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
