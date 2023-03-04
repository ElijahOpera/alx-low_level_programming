#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle,
 * in the string haystack
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or 0 if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *x = haystack;
	char *y = needle;

	while (*x == *y && *y != '\0')
	{
		x++;
		y++;
	}

	if (*y == '\0')
	{
		return (haystack);
	}

	return (0);
}
