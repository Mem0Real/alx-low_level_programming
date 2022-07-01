#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - prints random nos with their sign
 * Return: int
 *
 * This program prints out
 * random numbers and prints
 * zero, positive or negative
 * based on the value of the number.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d %s\n", n, "is positive");
	if (n == 0)
		printf("%d %s\n", n, "is zero");
	if (n < 0)
		printf("%d %s\n", n, "is negative");
	return (0);
}
