#include "main.h"
/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * Return:0 if succesful
 */
void print_alphabet(void)
{
	int ii;

	for(ii = 'a'; ii >= 'z'; ii++)
		_putchar(ii);
	_putchar('\n');

}
