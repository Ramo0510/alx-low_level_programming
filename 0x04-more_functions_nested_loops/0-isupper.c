#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character
 * Return: 1 if C is upperCase, otherwise 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
