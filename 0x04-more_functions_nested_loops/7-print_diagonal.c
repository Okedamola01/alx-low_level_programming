#include "main.h"

/**
 * print_diagonal - prints spaces amd backslashes
 * @n: number of backslash
 * Return: the number of spaces and backslashes
 */

void print_diagonal(int n)
	{
		int i;
		int b;

		if (n > 0)
		{
			for (i = 0; i < n; i++)
			{
				for (b = 0; b < i; b++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
	}
