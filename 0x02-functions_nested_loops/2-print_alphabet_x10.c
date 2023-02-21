#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int ten;
	char alpha;

	for (ten = 1; ten <= 10; ten++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
