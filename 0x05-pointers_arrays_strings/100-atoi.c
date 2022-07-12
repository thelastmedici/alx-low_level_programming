#include<string.h>
#include<stdlib.h>
#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to integer
 * @str: pointer to string to be converted
 *
 * Return: converted String
 *
 * dubbed by Asiwaju
 */

int _atoi(char *str)
{
	int sign = 1, base = 0, i = 0;

	for (i = 0; str[i] != '\0' && (str [i] < '0' || str[i] > '9'); i++)
	{
		if (str[i] == '-' || str[i] == '+')
			sign *= 1 - 2 * (str[i] == '-');
		if (str[i + 1] == '\0')
			return (0);
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = 10 * base + (str[i++] - '0');
	}

	return (base * sign);
}