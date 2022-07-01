#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign random number and print certain text accordingly
 * Return: int
 *
 * This program will assign a random number to the variable n each time it is executed.
 * The output of the program should be:
 * The string Last digit of, followed by
 * n, followed by
 * the string is, followed by
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 * followed by a new line.
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("%s %d %s %d %s\n", "Last digit of", n, "is", lastDigit, "and is greater than 5");
	if (lastDigit == 0)
		printf("%s %d %s %d %s\n", "Last digit of", n, "is", lastDigit, "and is 0");
	if (lastDigit < 6)
		printf("%s %d %s %d %s\n", "Last digit of", n, "is", lastDigit, "and is less than 6 and not 0");	
	return (0);
}
