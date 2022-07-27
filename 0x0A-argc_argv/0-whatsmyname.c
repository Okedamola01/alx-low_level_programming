#include "main.h"
#include <stdio.h>
/**
 * whatsmyname - program that pints its name
 * @argc: number of command line argumnets
 * @argv: array containing command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
