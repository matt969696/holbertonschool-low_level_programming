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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
