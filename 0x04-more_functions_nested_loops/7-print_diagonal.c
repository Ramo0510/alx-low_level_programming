#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: number of times the character `\` should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i;
int j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = i; j; j--)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}}

else
_putchar('\n');
}
