#include <stdio.h>

/**
 * main - finds and prints the
 * first 98 Fibonacci numbers
 *
 * Return: 0
 **/

int main(void)
{
	int i, j, ret;
	long sum;
	long n[5], n1[5], n2[5];

	for (i = 0; i < 5; i++)
	{
		n[i] = 0;
		n1[i] = 0;
		n2[i] = 0;
	}
	n1[0] = 2;
	n2[0] = 1;
	printf("1, 2");
	for (i = 3; i <= 98; i++)
	{
		ret = 0;
		for (j = 0; j < 5; j++)
		{
			sum = n1[j] + n2[j] + ret;
			if (sum > 1000000000)
			{
				sum = sum - 1000000000;
				ret = 1;
			}
			else
				ret = 0;
			n[j] = sum;
			n2[j] = n1[j];
			n1[j] = n[j];
		}
		printf(", ");
		for (j = 4; j >= 0; j--)
		{
			if (n[j] > 0)
				printf("%li", n[j]);
		}
	}
	printf("\n");
	return (0);
}
