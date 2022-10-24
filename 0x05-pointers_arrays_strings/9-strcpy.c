/**
 * _strcpy - a function that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: a pointer to destination of string.
 * @src: a pointer to source string to copy from.
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *swp = dest;

	while (*src)
		*dest++ = *src++;
	return (swp);
}
