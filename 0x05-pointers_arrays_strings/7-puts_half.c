#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: the string to print.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int x = 0, y;

	while (str[x] != '\n')
	{
		x++;
	}

	if (x % 2 == 1)
	{
		y = (x - 1) / 2;
		y += 1;
	}
	else
	{
		y = x / 2;
	}

	for (; y < x; y++)
	{
		_putchar(str[k]);
	}
	-putchar('\n');
}
