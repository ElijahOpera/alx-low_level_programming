#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: the string to print.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int length = 0, x, y;

	for (x = 0; str[x] != '\n'; x++)
	{
		length++;
	}
	y = (length / 2);

	if ((length % 2) == 1)
	{
		y = ((length + 1) / 2);
	}

	for (x = y; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
