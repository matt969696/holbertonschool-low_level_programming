#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Display the 0 to 9 digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int nb1;
	int nb2;

	for (nb1 = 0; nb1 < 100; nb1++)
	{
		for (nb2 = nb1 + 1; nb2 < 100; nb2++)
		{
			if (nb1 != 0 || nb2 != 1)
			{
				putchar(',');
				putchar(' ');
			}

			if (nb2 > nb1)
			{
				putchar('0' + nb1 / 10);
				putchar('0' + nb1 % 10);
				putchar(' ');
				putchar('0' + nb2 / 10);
				putchar('0' + nb2 % 10);
			}
		}
	}
	putchar('\n');
	return (0);
}
