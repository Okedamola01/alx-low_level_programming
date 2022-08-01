#include <stdio.h>

/**
 * main - print the name of file it was compile from, followed by newline
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
