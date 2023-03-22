#include <stdio.h>

/**
 * print_to_98 - print all naturals numbers from n to 98
 * @n: start number
 *
 * Return: void
 */
void print_to_98(int n)
{
int num = n;

while (num != 98)
{
if (num < 98)
{
printf("%d, ", num);
num++;
}
else if (num > 98)
{
printf("%d, ", num);
num--;
}
}
printf("%d\n", num);
}
