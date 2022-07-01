#include <stdio.h>

/**
  * main - Prints combinations of 3 digits
  * Return: null
  *
  * This program prints all combinations of
  * three digits separated by ',' followed
  * by space. Here the digits must be different
  * and arranged in ascending order using putchar
  * function only 6 times without using char.
  */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == '7' && j == '8' && k == '9')
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
	}

	putchar('\n');
	return (0);
}
