#include "main.h"

/**
 *_strlen_recursion - length of a string
 *@s: pointer to fill block of memory.
 *Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{
/* starting condition */
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
