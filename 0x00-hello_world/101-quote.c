#include <stdio.h>
#include <unixstd.h>
/**
 * main - Entry point
 * Description: UNIX is basically a simple operating system.
 * Retrun: 1 if Success
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
