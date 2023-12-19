#include <stdio.h>
/**
 * main - a c code that prints alphabet in lower case
 * by big priest
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);

	putchar('\n');

	return (0);
}
