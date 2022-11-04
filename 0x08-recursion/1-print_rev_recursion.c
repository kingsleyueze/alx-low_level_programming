#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse,
 * followed by a new line.
 * @s: an input string to printing.
 * Return: null.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
