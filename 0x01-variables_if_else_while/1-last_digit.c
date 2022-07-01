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

	if (lastDigit > 5)
		printf("%s %d %s %d %s\n", "Last digit of" n, "is", lastDigit, "and is greater than 5");
	else if (lastDigit == 0)
		printf("%s %d %s %d %s\n", "Last digit of", n, "is", lastDigit, "and is 0");
	else if (lastDigit < 6)
		printf("%s %d %s %d %s\n", "Last digit of", n, "is", lastDigit, "and is less than 6 and not 0");	
	return (0);
}
