#include <stdio.h>

/**
  * main - Print alphabet in lowercase and uppercase followed by a line
  * Return: int
  *
  * This function prints the alphabet in lowercase,
  * uppercase then a new line by using 'putchar'
  * only 3 times.
  */

int main(void)
{
	char alphabet[27];
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		alphabet[i] = 'a' + i;
		putchar(alphabet[i]);
	}

	for (j = 0; j < 26; j++)
	{
		alphabet[j] = 'A' + j;
		putchar(alphabet[j]);
	}

	putchar('\n');
	alphabet[i] = '\0';	
	alphabet[j] = '\0';
	return (0);
}
