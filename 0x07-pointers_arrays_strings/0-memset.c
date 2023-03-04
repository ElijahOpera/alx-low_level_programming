#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: starts the address of memory to be filled.
 * @b: the desired value.
 * @n: number of bytes to be changed.
 *
 * Return: changed array with the new value for n bytes.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
