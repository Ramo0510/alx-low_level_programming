#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an arrray of integers
 * @a: array to reverse
 * @n: number of elements of the array
 *
 * return: Nothing.
 */

void reverse_array(int *a, int n)
{
int z;
int b;
int swap;

z = 0;
b = n - 1;

while (z < n / 2)
{
swap = *(a + z);
*(a + z) = *(a + b);
*(a + b) = swap;
z++;
b--;
}
}
