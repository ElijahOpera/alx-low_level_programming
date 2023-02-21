#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to print the last digit of.
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	/* Compute the absolute value of the number */
	if (n < 0)
	{
		n = -n;
	}

	/* Get the last digit of the number */
	last_digit = n % 10;

	_putchar(last_digit + '0');

	/* Return the value of the last digit */
	return (last_digit);
}
