#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be located in the string
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or 0 if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}

	return (0);
}
