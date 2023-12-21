#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char p;
	char q;

	for (q = 0; q < 10; q++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
