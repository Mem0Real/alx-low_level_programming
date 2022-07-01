#include <stdio.h>

/**
  * main - Prints all numbers of base16
  * Return: null
  *
  * This program prints all numbers of base 16
  * in lowercase followed by a new line using
  * the 'putchar' function.
  */

int main(void)
{
	int i;
	int j;
	char y[7];
	
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (j = 0; j < 6; j++)
	{
		y[j] = 'a' + j;
		putchar(y[j]);
	}

	putchar('\n');
	y[j] = '\0';
	return (0);
}