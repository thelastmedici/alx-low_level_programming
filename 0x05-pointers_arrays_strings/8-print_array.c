#include <stdio.h>
#include "main.h"
/**
 * print_array - print the items in an array
 * @arr: array to be printed
 * @n: number of element to print
 *
 * dubbed by asiwaju
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}

	putchar('\n');
}

