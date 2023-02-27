#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first one.
 * @str: the string to be treated.
 * Followed by a new line.
 * Return: void.
 */

void puts2(char *str)
{
	int x, y = 0;

	while (str[y] != '\0')
	{
		y++;
	}

	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
