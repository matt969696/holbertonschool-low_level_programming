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
	int nb3;
	int nb4;

	while (nb1 <= 57)
	{
		nb2 = 48;
		while (nb2 <= 57)
		{
			if (nb2 = 57)
			{
				nb3 = nb1 + 1;
				nb4 = 48;
			}
			else
			{
				nb3 = nb1;
				nb4 = nb2 +1;
			}
			printf("Debug %d %d %d %d", nb1, nb2, nb3, nb4);

			while (nb3 <= 57)
			{
				while (nb4 <=57)
				{
					if ((nb1 > 48) || (nb2 > 48) || (nb3 > 48) || (nb4 > 49))
					{
						putchar(',');
						putchar(' ');
					}
					putchar(nb1);
					putchar(nb2);
					putchar(' ');
					putchar(nb3);
					putchar(nb4);
					nb4++;
				}
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}

	putchar('\n');

	return (0);
}
