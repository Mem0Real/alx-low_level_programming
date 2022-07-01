#include <stdio.h>

/**
  * main - Print alphabet without q or e then new line
  * Return: int
  *
  * This program prints the alphabet without including
  * the letters 'q' and 'e' then add a new line.
  */

int main(void)
{
	char alphabet[27];
	int i;

	for (i = 0; i < 26; i++)
	{
		alphabet[i] = 'a' + i;
		if (alphabet[i] != 'e' && alphabet[i] != 'q')
		{
			putchar(alphabet[i]);
		}
	}

	putchar('\n');
	alphabet[i] = '\0';
	return (0);
}