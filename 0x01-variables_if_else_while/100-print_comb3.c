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
	int nb1 = 48;
	int nb2;

	while (nb1 <= 57)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 57)
		{
			if ((nb1 > 48) || (nb2 > 49))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(nb1);
			putchar(nb2);
			nb2++;
		}
		nb1++;
	}

	putchar('\n');

	return (0);
}
