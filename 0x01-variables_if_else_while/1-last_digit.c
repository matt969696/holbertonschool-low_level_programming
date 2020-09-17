#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Display last digit of number n
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		ld = n % 10;
	else
		ld = -(-n % 10);

	printf("Last digit of %d is %d", n, ld);
	if (ld > 5)
		printf(" and is greater than 5\n");
	if (ld == 0)
		printf(" and is 0\n");
	else if (ld < 6)
		printf(" and is less than 6 and not 0\n");

	return (0);
}
