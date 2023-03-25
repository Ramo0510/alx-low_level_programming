#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9, skip 2 && 4.
 * Return: void
 */

void print_most_numbers(void)
{
int num = 0;

while (num <= 9)
{
if (num == 2 || num == 4)
{
num++;
continue;
}
_putchar(num + '0');
num++;
}
_putchar('\n');
}
