#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - a function that returns the sum of @a and @b.
 * @a: an input integer.
 * @b: an input integer.
 * Return: the result to sum @a + @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the subtract of @a and @b.
 * @a: an input integer.
 * @b: an input integer.
 * Return: the result of difference @a - @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the product of @a and @b.
 * @a: an input integer.
 * @b: an input integer.
 * Return: the result of product @a * @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the dividend of @a and @b.
 * @a: an input integer.
 * @b: an input integer.
 * Return: the result of dividend @a / @b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - a function that returns the modulus of @a and @b.
 * @a: an input integer.
 * @b: an input integer.
 * Return: the result of modulus @a % @b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
