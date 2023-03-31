#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */

char *leet(char *str)
{
int i = 0;
char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int j;
char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

i = 0;
while (str[i] != 0)
{

for (j = 0; j < 10; j++)
{
if (*(str + i) == *(arr + j))
{
*(str + i) = *(num + j);
break;
}
}
i++;
}
return (str);
}
