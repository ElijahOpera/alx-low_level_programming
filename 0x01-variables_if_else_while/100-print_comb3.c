#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int x = 'o';
	int y = '0';

	for (y = '0'; y <= '9'; y++) /* prints y digits */
	{
		for (x = '0'; x <= '9'; x++) /* prints x digits */
		{
			if (!((x == y) || (y > x))) /* repition elimination */
			{
				putchar(y);
				putchar(x);

				if (!(x == '9' && y == '8')) /* adds commas and spaces */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
