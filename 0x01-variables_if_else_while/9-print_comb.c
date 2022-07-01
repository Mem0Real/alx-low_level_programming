#include <stdio.h>

/**
  * main - Print all possible combinations of single-digit numbers
  * Return: null
  *
  * This program prints all combinations of single digit numbers
  * i.e. 0-9 separated by , followed by space in ascending
  * order using the 'putchar' function without using char
  */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if(i < '9')
			putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}