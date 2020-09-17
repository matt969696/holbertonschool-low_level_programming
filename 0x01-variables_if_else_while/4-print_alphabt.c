#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Display the alphabet letters without q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
