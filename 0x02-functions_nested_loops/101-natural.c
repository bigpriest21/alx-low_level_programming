#include <stdio.h>

/**
 * main - list all the natural numbers that are
 *        multiples of 3 or 5 excluding 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int v, sum = 0;

	for (v = 0; v < 1024; v++)
	{
		if ((v % 3) == 0 || (v % 5) == 0)
			sum += v;
	}

	printf("%d\n", sum);

	return (0);
}
