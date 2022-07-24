#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply 2 variable supplied at command line
 * @argc: number of actual arguements
 * @argv: pointer to the arguement supplied
 *
 * Return: sucess
 *
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	exit(EXIT_SUCCESS);
}
