#include <stdio.h>

/**
 * main - prints alphabets in lowercase except q and e, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	char lc_qe;

	for (lc_qe = 'a'; lc_qe <= 'z'; lc_qe++)
	{
		if (lc_qe != 'e' && lc_qe != 'q')
			putchar(lc_qe);
	}

	putchar('\n');

	return (0);
}
