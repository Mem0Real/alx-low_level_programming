#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 * Return: int
 *
 * This program prints alphabet in lowercase
 * using the 'putchar' function
 */

int main()
{
	char alphabet[27];
	int i;

	for(i = 0; i < 26; i++)
	{
		alphabet[i] = 'a'+i;
		putchar(alphabet[i]);
	}

	putchar('\n');
	alphabet[i] = '\0';
	return 0;
}
