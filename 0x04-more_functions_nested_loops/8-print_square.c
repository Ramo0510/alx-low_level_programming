#include "main.h"

/**
 * print_square - prints squares followed by new line
 * @size: size of square
 *
 * Return: void.
 */

void print_square(int size)
{
int i;
int j;

if (size > 0)
{
for (j = size; j > 0 ; j--)
{
i = 0;
while (i < size)
{
_putchar('#');
i++;
}

_putchar('\n');
}}

else
_putchar('\n');
}
