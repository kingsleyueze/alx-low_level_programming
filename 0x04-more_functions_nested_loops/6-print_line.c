#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal followed
 * by a new line.
 * @n: an input integer.
 * Return: always 0.
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
