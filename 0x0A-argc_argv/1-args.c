#include "holberton.h"
#include <stdio.h>

/**
 * main - prints program name followed by a new line
 *
 * @argc : standard argc
 * @argv : standard argv
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
