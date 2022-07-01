#include <stdio.h>

/**
  * main - Print various types
  * Return: null
  *
  * Prints size of various types on the computer
  * it's compiled on.
  */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n, sizeof(char));
	printf("Size of an int: %lu byte(s)\n, sizeof(int));
	printf("Size of a long int: %lu byte(s)\n, sizeof(int*));
	printf("Size of a float: %lu byte(s)\n, sizeof(float));
	return (0);
}
