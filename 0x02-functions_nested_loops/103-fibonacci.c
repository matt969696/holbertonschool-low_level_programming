#include <stdio.h>

/**
 * main - finds and prints the
 * sum of the even-valued terms of Fibonnaci below 4,000,000
 *
 * Return: 0
 **/

int main(void)
{
	long n, n1, n2;
	long sum;

	n = 3;
	n1 = 2;
	n2 = 1;
	sum = 2;

	while (n < 4000000)
	{
		n = n1 + n2;
		n2 = n1;
		n1 = n;
		if (n % 2 == 0 && n < 4000000)
			sum += n;
	}
	printf("%li\n", sum);
	return (0);
}
