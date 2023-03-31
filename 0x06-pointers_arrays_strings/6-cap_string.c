#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: output the string in capitalized format
 */

char *cap_string(char *str)
{
int i;

i = 0;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}

while (str[i])
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
|| str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
|| str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '{'
|| str[i] == '}')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 'a' - 'A';
}

i++;
}
return (str);
}
