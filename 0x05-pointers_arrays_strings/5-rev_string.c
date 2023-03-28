#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer variable
 *
 * Return: void.
 */

void rev_string(char *s)
{
int i;
int len;
char temp;

len = 0;
while (*(s + len) != '\0')
len++;
len--;

i = 0;
while (len >= i)
{
temp = *(s + len);
*(s + len) = *(s + i);
*(s + i) = temp;
len--;
i++;
}
}
