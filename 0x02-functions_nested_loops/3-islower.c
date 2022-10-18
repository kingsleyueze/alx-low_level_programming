#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: an input character.
 * Return: 1 if character is lowercase or 0 if is uppercase.
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
