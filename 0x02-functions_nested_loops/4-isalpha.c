#include "main.h"

/**
 * _isalpha - check if character is an alphabet.
 * @c: an input character.
 * Return: 1 if character is an alphabet else 0.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isalpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isalpha = 1;
		}
	}

	return (isalpha);
}
