#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign random number and print certain text accordingly
 * Return: int
 *
 * This program prints random number
 * and assign different string based on
 * it's value.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit;
	char ldo[] = "Last digit of";
	char g[] = "and is greater than 5";
	char z[] = "and is 0";
	char m[] = "and is less than 6 and not 0";

	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("%s %d %s %d %s\n", ldo, n, "is", lastDigit, g);
	else if (lastDigit == 0)
		printf("%s %d %s %d %s\n", ldo, n, "is", lastDigit, z);
	else if (lastDigit < 6)
		printf("%s %d %s %d %s\n", ldo, n, "is", lastDigit, m);	
	return (0);
}
