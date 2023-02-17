#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x < '9'; x++) /* prints x digits */
	{
		for (y = x + 1; y <= '9'; y++) /* prints y digits */
		{
			if (!((x == y) || (y > x))) /* repition elimination */
			{
				putchar(x);
				putchar(y);

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
