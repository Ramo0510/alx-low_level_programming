#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area where to copy
 * @src: copy n bytes from src to dest
 * @n: n bytes to copy
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int b;

for (b = 0; b < n; b++)
{
dest[b] = src[b];
}
return (dest);
}
