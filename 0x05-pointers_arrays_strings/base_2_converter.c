#include <stdio.h>

/**
 * main - function that converts a number (in base 10) to base 2.
 * Return: always 0 (success).
 */	
int main(void)
{
	int a, i, j, len;

	printf("Enter a number (in base 10) to be converted to base 2: ");

	int b, c, d;

	b = getchar() - '0';
	c = getchar() - '0';
	d = getchar() - '0';
	a = b * 100 + c * 10 + d;

	for (i = a, j = 0; i != 0; i /= 2, j++);

	len = j;

	int b_10[len];
	int b_2[len];

	for (i = a, j = 0; i != 0; i /= 2, j++)
		b_10[j] = i % 2;

	for (i = 0, j = len - 1; i < len; i++, j--)
		b_2[i] = b_10[j];

	printf("%d in base 2 is ", a);

	for (i = 0; i < len; i++)
		printf("%d", b_2[i]);

	printf(".\n");

	return (0);
}
