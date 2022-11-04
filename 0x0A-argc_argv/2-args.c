#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguements it receives.
 * @argc: the arguement counter.
 * @argv: the arguement values.
 * Return: always 0 (success).
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
