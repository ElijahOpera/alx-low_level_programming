#include "main.h"

/**
 * print_line - draws a straight line of n underscores in the terminal.
 * @n: number of underscores to be printed.
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
