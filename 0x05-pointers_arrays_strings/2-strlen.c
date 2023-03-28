#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer variable
 *
 * Return: string's length
 */

int _strlen(char *s)
{
int a, len;

len = 0;
a = 0;

while (*(s + a) != '\0')
{
len++;
a++;
}
return (len);
}
