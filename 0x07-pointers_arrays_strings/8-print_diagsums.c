#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 * of a square matrix of integers
 * @a: pointer that points to an array
 * @size: size of the array
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
int i = 0;
int j = size - 1;
int sum1 = 0;
int sum2 = 0;

while (i <= (size * size))
{
sum1 += *(a + i);
i += size + 1;
}
while (j <= (size * size) - size)
{
sum2 += *(a + j);
j += size - 1;
}
printf("%d, %d\n", sum1, sum2);
}
