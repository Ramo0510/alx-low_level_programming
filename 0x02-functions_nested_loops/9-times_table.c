#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int a = 0;
int b = 1;
int num = 0;

while (a <= 9)
{
_putchar('0');
_putchar(',');
_putchar(' ');
while (b <= 9)
{
num = a * b;

if ((num / 10) > 0)
_putchar ((num / 10) + '0');
else
_putchar(' ');

_putchar((num % 10) + '0');
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
b = 1;
}
}
