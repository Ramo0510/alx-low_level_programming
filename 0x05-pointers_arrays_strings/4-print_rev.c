#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer variable
 *
 * Return: void.
 */

void print_rev(char *s)
{
int len;
int i;

len = strlen(s);
i = 0;

while (*(s + i) != '\0')
{
_putchar(*(s + (len - 1)));
i++;
len--;
}
_putchar('\n');
}
