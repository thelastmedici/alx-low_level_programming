#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of arguments passed to main
 * @argc: number of actual parameter passed to main
 * @argv: pointer to the first element passed to main
 *
 * Return: sucess
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc-- > 1)
		count++;

	(void)(*argv);

	printf("%d\n", count);
	exit(EXIT_SUCCESS);
}
