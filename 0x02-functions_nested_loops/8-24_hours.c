#include "main.h"

/**
 * jack_bauer - prints every minute of the day 00:00 - 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
int hours;
int minutes;

for (hours = 0; hours <= 23; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((minutes / 10) + '0');
_putchar((minutes % 10) + '0');
_putchar('\n');
}
}
}
