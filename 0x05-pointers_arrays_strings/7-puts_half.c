#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: the string to print.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int length = 0, x;

	while (*(str + length) != '\n')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		x = length / 2;
	}
	else
	{
		x = (length - 1) / 2 + 1;
	}

	while (x < length)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
