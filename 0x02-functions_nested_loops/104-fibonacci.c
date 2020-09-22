#include <stdio.h>

/**
 * main - finds and prints the
 * first 98 Fibonacci numbers
 *
 * Return: 0
 **/

int main(void)
{
	int i, ret;
	long n10 = 0, n11 = 0, n12 = 2, n20 = 0, n21 = 0, n22 = 1;
	long n0 = 0, n1 = 0, n2 = 0;

	printf("1, 2");
	for (i = 3; i <= 98; i++)
	{
		ret = 0;
		n2 = (n12 + n22) % 1000000000;
		ret = (n12 + n22) / 1000000000;
		n1 = (n11 + n21 + ret) % 1000000000;
		ret = (n11 + n21 + ret) / 1000000000;
		n0 = (n10 + n20 + ret) % 1000000000;

		printf("    : n0 %li n1 %li n2 %li \n", n0, n1, n2);
		printf(", ");
		if (n0 > 0)
			printf("%li", n0);
		if (n1 > 0 || n0 > 0)
		{
			if (n0 == 0)
				printf("%li", n1);
			else
				printf("%09li", n1);
		}
		if (n1 == 0 && n0 == 0)
			printf("%li", n2);
		else
			printf("%09li", n2);

		n20 = n10;
		n21 = n11;
		n22 = n12;
		n10 = n0;
		n11 = n1;
		n12 = n2;
	}
	printf("\n");
	return (0);
}
