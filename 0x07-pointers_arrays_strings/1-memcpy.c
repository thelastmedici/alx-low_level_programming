#include "main.h"
#include <string.h>

/**
* _memcpy - fills the first n bytes of the memory pointed to s
*
* @dest: pointer to the string dest
* @src: pointer to the string src
* @n: size in byte of a memory space
*
* Return: pointer to the variable dest.
*/

char *memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
