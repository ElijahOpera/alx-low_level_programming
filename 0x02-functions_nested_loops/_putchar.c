#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 *
 * @c: writes the character
 *
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
