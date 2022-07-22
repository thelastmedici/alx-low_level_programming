#include "main.h"
/**
 * *_strncat -> function to append some charx
 * @dest: first param
 * @src: second param
 * @n: 3rd param
 * Return:void
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len, i;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++);

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

dest[dest_len + i] = '\0';

return (dest);
}

