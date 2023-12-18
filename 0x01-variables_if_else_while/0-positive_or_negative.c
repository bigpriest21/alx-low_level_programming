#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a c code that print random number
 * if the number is grester than zero prints positive
 * if the number is lesser than zero prints negative
 * but if it is equal to zero prints zero
 * written by big priest
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
