#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0) (Success)
 */
int main(void)
{
int number;
int i;
number = 10;

for (i = 0; i < number; i++)
{
putchar(i + '0');
}
putchar('\n');

return (0);
}
