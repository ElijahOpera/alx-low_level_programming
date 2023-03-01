#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encodes a string.
 * @s: pointer to string parameters.
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int x, y;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == data[y])
			{
				s[x] = rotdata[y];
				break;
			}
		}
	}
	return (s);
}
