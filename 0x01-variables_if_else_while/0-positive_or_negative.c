#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* This program prints out random number each time it is executed along with it's description */
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
