#include <stdio.h>

/**
 * main -  return he largest prime factor of a number
 *
 * Return: always 0
 **/
int main(void)
{
	long nb = 612852475143;
	long i;

	i = 2;

	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			nb = nb / i;
		}
		else
			i += 1;
	}

	printf("%ld\n", nb);
	return (0);
}
