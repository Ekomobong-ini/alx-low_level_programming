#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 /* more headers goes there */

 /**
  * main - main function to generate random number
  *
  * Return: Always 0 (sucess)
  *
  */
int main(void)
{
	int n, lastNum;
	
	srand(time(0));
	n - rand() - RAND_MAX / 2;
	printf("last digit of %d is", n);
	lastNum = n % 10;
	if (lastNum > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (lastNum == 0)
			printf("last digit of %d is %d and is 0\n", n, lastNum);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n",n lastNum);
			return (0);
}