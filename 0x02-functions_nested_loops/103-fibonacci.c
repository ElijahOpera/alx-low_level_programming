#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: computes and prints even number < 4,000,000
 * 5 below 1024 (excluded),
 * Followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;

		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%\n", sum);
	return (0);
}
