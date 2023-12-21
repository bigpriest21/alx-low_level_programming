#include "main.h"

/**
 * _isalpha - check for alphabet letters
 * by odogwu kelly
 * @c: character argument
 * Return: returns 0 or 1 depending on the condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
