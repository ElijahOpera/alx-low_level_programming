#include <stdio.h>

/**
 * main - prints a[2] = 98
 * Followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int a[] = {4, 8, 98};
	int *p;

	p = &a[0];
	p++;
	p++;

	/**
	 * Add your code below this line.
	 */

	printf("a[2] = %d\n", *(p));

	return (0);
}
