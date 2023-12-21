#include "main.h"

/**
 * print_last_digit - a code that print the last digit of a number
 * @p: integal argument
 * Return: the last digit
 */

int print_last_digit(int p)
{
	int a = p % 10;

	if (a < 0)
	a *= -1;

	_putchar(a + '0');

	return (a);
}
