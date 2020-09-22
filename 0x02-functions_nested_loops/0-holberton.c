#include "holberton.h"
/**
 * main - Function that prints "Holberton"
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char myString[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(myString[i]);
	_putchar('\n');
	return (0);
}
