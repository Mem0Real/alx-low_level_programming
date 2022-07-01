#include <stdio.h>

/**
  * main - Print all combinations of two digits
  * Return: null
  *
  * Prints all combinations of two digits separated
  * by ',' followed by space and the two digits must
  * be different.
  */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
				{
				}

				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
