#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14, followed by new line
 * Return: void.
 */

void more_numbers(void)
{
int num;
int i;

i = 0;
while (i < 10)
{
num = 0;
while (num <= 14)
{
if (num > 9)
_putchar((num / 10) + '0');

_putchar((num % 10) + '0');
num++;
}
_putchar('\n');
i++;
}}
