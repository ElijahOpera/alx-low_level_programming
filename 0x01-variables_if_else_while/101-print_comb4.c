#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int x = '0';
	int y = '0';
	int z = '0';

	for (z = '0'; z <= '9'; z++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (x = '0'; x <= '9'; x++)
			{
				if (!((x == y) || (y == z) || (y > x) || (z > y)))
				{
					putchar(z);
					putchar(y);
					putchar(x);

					if (!(x == '9' && z == '7' && y == '8')) /* commas and spaces addition */
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
