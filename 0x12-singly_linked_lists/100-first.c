#include <stdio.h>



/**
 * printbeforemain - prints a string before the main execution
 *
 * Return: Void
 */

void printbeforemain(void) __attribute__ ((constructor));

void printbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
