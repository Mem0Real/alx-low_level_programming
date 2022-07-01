#include <stdio.h>

/**
  * main - prints lowercase alphabet in reverse order
  * Return: null
  *
  * This program prints out all alphabets in lowercase
  * reversed using the 'putchar' function
  */

int main(void)
{
	char alpha[27];
	int i;

	for (i = 25; i >= 0; i--)
	{
		alpha[i] = 'a' + i;
		putchar(alpha[i]);
	}

	putchar('\n');
	alpha[i] = '\0';
	return (0);
}
