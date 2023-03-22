#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the number to be checked
 *
 * Return: 1 in case the character is lowerCase and 0 for upperCase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
