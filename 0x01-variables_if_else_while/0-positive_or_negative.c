#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes there */

/**
 * main - Entry point
 * Description - prints if randome generated number is +tive, zero or -tive
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n" , n);
	else if (n == 0)
		printf("%d is zero\n" , n);
	else
		printf("%d is positive\n" , n);
	return (0);
}