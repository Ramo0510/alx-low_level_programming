#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is the number to be checked
 *
 * Return: 1 if `c` is a character, and 0 for otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
