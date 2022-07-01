#include <stdio.h>

/**
  * main - Print all single digit numbers of base 10 starting from 0
  * Return: null
  *
  * This program prints all single digit numbers of base 10 
  * starting from 0, followed by a new line using putchar.
  */

int main(void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
