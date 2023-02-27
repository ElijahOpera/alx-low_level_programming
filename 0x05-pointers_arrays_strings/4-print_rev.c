#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * Followed by a new line.
 * @s: string.
 * Return: 0.
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
	s--;

	for (x = length; x  > 0; x++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
