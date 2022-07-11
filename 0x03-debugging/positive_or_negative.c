#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (success)
 */
int positive_or_negative(void)
{
int n;

srand(time(0));
n = rand() - RAND-MAX / 2;

if (n < 0)
printf("%d is negative\n", n);
else if (n > 0)
printf("%d is positive\n", n);
else
printf("%d is equal to zero\n", n);
return (0);
}
