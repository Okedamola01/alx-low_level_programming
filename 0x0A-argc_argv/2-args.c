#include "main.h"
#include <stdio.h>

/**
 * 2-args - program to print all data in argv array
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return 0;
}
