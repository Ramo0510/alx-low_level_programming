#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0) (Success)
 */
int main(void)
{
int numbers;

while (numbers <= 9)
{
putchar(numbers + '0');
numbers++;

if (numbers == 10)
continue;
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
