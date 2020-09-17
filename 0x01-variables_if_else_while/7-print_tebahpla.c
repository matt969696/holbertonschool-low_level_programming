#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Display the alphabet letters
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
