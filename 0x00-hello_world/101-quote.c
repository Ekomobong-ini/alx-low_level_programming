#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 *   follow by a new line. to standard error.
 * Return: Always 0 (sucess)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", s9);
	return (1);
}
