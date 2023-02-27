#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: The string to be modified.
 * Return: void.
 */

void rev_string(char *s)
{
	int length = 0;
	int index = 0;
	char rev;

	while (s[index++])
	{
		length++;
	}

	for (index = length - 1; index >= length / 2; index--)
	{
		rev = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = rev;
	}
}
