#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string to compare.
 * @s2: second string to compare.
 *
 * Return: negative integer if s1 is less than s2,
 * Positive integer if s1 is greater than s2,
 * 0 if s1 is equal to s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
