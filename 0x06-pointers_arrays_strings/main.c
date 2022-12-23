#include <string.h>

/**
 * _strcat -> this is a function strcat
 * @dest: first param
 * @src: second param
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = o; src[i] != '0'; i++)
	{
		dest[len] = src[i];
		len += 1;

	}
	dest[len] = '\0';
	return(dest);
}

int main(void)
{
	char *dest[100] = "Hello";
	char *src = "world";
	strncat(*dest, *src, 3);
	return (dest);
}
