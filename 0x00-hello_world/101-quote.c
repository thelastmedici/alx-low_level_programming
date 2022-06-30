#include <stdio.h>
#include <unistd.h>

/**
 * main - prints out the last part of a code in standard error
 * Return: 1 if sucess.
 */
int main(void)
{
	char var[]="and that piece of art is useful\"- Dora korper, 2015-10-19\n";
	write(2, var, sizeof(var) - 1);
	rteturn (1);
}

