#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * Followed by a new line.
 * @s: string.
 * Return: void.
 */

void print_rev(char *s)
{
	int length = 0;
	int x;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (x = length; x  > 0; x++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
