#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: substring
 *
 * Return: s that matches the bytes in accept, otherwise NULL.
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
		{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
