#include "main.h"

/**
 * puts2 - print even number in a string
 * @str: string variable
 *
 * dubbed by asiwaju
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
