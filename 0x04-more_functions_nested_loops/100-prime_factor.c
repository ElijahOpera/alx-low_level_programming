#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143.
 * Followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	long int i;
	long int max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);
	return (0);
}
