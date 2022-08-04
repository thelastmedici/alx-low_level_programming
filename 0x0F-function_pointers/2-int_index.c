#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @array: array to be searched
 * @size: number of element in the array
 * @cmp: pointer to the function that will be used to commpare  values
 *
 * Return: returns the index of the first element
 *			-1 if no element found or no element in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
