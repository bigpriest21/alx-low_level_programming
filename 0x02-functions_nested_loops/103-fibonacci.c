#include <stdio.h>

/**
 * main - print sum of even value fibonacci not exceeding 4000000
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float totSum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			totSum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", totSum);

	return (0);
}
