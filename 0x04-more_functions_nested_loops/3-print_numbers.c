#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, 0 and 9,
 * followed by a new line.
 * Return: Always 0
 */

void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
