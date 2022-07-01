#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	string p;
	string z;
	string ng;
	
	p = "is positive";
	z = "is zero";
	ng = "is negative";

	if(n > 0)
		printf(p);
	else if ( n == 0) 
		printf(z);
	else if ( n < 0) 
		printf(ng);

	return (0);
}
