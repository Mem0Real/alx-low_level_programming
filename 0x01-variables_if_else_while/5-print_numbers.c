#include <stdio.h>

/**
  * main - Print all single digit numbers starting from 0
  * Return: void
  *
  * This program returns all single digit numbers starting
  * from 0 followed by a new line.
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
