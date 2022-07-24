#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments passed into main
 * @argc: number of actual parameter passed to main
 * @argv: pointer to the first element passed into main
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	exit(EXIT_SUCCESS);
}
