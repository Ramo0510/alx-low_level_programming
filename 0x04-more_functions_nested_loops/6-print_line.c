#include "main.h"

/**
 * print_line - print a line in the terminal
 * @n: number of times the character `_` should be printed
 *
 * Return: void
 */

void print_line(int n)
{
int num;

for (num = 0; num < n; num++)
{
if (n > 0)
_putchar('_');
}
_putchar('\n');
}
