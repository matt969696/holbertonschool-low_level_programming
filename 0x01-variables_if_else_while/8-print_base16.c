#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Display the alphabet letters in lower and upper cases
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	ch = 'a';

	while (ch <= 'e')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
