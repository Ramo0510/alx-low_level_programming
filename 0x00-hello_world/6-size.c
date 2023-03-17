#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char char_size;
int int_size;
long int longInt_size;
long long int longLongInt_size;
float float_size;

printf("Size of a char: %lu byte(s)\n", sizeof(char_size));

printf("Size of an int: %lu byte(s)\n", sizeof(int_size));

printf("Size of a long int: %lu byte(s)\n", sizeof(longInt_size));

printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongInt_size));

printf("Size of a float: %lu byte(s)\n", sizeof(float_size));

return (0);
}
