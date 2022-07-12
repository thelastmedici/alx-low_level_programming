#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a set of string
 * @s: pointer to the string variable s
 *
 * dubbed by asiwaju
 */
void puts_half(char *s)
{
	int len = strlen(s), i;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(s[i]);
	}
	else
		for (i = (len / 2) + 1; i < len; i++)
			_putchar(s[i]);


	_putchar('\n');
}
