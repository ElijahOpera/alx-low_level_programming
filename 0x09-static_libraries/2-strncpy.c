#include "main.h"

/**
 * _strncpy - Copies the first n bytes of a string.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy.
 *
 * Return: Pointer to the destination buffer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for (; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}
