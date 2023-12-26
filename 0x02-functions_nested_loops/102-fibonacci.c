#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers, starting with 1
 *        and 2 seperated by comma and followed by a space
 *
 * Return: Always 0
 */

int main(void)
{
	int list;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (list = 0; list < 50; list++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (list == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
