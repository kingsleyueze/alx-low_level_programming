#include "main.h"

/**
 * _abs - compute the absolute value of an integer.
 * @r: an integer input.
 * Return: absolute value of number r.
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
