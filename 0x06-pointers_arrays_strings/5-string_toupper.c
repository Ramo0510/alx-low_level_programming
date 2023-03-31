#include "main.h"

/**
 * string_toupper - turn lowercase characters to uppercase
 * @str: string to convert to uppercase
 * Return: Converted string
 **/

char *string_toupper(char *str)
{
int i;

i = 0;
while (str[i])
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
{
str[i] += 'A' - 'a';
}
i++;
}
return (str);
}
