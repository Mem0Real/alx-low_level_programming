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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	char ldo[14] = "Last digit of";
	char g[22] = "and is greater than 5";
	char z[9] = "and is 0";
	char m[29] = "and is less than 6 and not 0"

	if (lastDigit > 5)
		printf("%s %d %s %d %s\n", ldo, n, "is", lastDigit, g);
	else if (lastDigit == 0)
		printf("%s %d %s %d %s\n", ldo, n, "is", lastDigit, z);
	else if (lastDigit < 6)
		printf("%s %d %s %d %s\n", ldo, n, "is", lastDigit, m);	
	return (0);
}
