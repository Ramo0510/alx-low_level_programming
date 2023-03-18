#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0) (Success)
 */
int main(void)
{
int i;
char alphabet;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (alphabet = 'a'; alphabet < 'g'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');

return (0);
}
