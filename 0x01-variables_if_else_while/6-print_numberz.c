#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return:0 if sucessful
 */
int main(void)

{
	int sly;

	for (sly = 0; sly < 10; sly++)
		putchar((sly % 10) + '0');


	putchar('\n');

	return (0);
}

