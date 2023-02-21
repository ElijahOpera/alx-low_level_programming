#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	/* If the integer is negative, make it positive */
	if (n < 0)
	{
		n = -n;
	}

	/* Return the absolute value of the integer */
	return (n);
}
