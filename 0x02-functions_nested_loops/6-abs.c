#include "main.h"

/**
 * _abs - Absolute value of an integer
 * @n: the checked number
 *
 * Return: absolute integer
 */
int _abs(int n)
{
int num = n;
if (n < 0)
return (num * -1);
else
return (num);
}
