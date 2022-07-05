#include "main.h"
/**
 * int _isalpha - function that checks for alphabetic character
 *
 * @c: is a lowercase or uppercase letter
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	if (lower || upper)
		return (1);
	else
		return (0);
}
