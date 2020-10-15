#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * findlen - multiply 2 arguments passed
 *
 * @num : number in string format
 *
 * Return: len of number, -1 if error
 */
int findlen(char *num)
{
	int i;

	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] < '0' || num[i] > '9')
			return (-1);
		i++;
	}
	return (i);
}



/**
 * strtoarr - convert a string into an array of int
 *
 * @num : number in string format
 * @lenstr : length of string
 * @size : final size of the array
 *
 * Return: array of int
 */

int *strtoarr(char *num, int lenstr, int size)
{
	int *arr;
	int i;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size - lenstr ; i++)
		arr[i] = 0;
	for (i = 0; i < lenstr ; i++)
		arr[size - lenstr + i] = num[i] - '0';
	return (arr);
}



/**
 * arraymult - multiply 2 strings of int
 *
 * @nb1 : string1
 * @len1 : len of string1
 * @nb2 : string2
 * @len2 : len of string2
 * @lenres : length of all the arrays
 *
 * Return: array of int
 */
int *arraymult(char *nb1, int len1, char *nb2, int len2, int lenres)
{
	int i, j, k, tot, ret;
	int *res;

	res = malloc(lenres * sizeof(int));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < lenres; i++)
		res[i] = 0;

	ret = 0;
	for (i = 0; i < lenres ; i++)
	{
		tot = ret;
		if (i > len1 - 1)
			j = len1 - 1;
		else
			j = i;

		k = i - j;
		while (k < len2 && k <= i)
		{
			tot += (nb1[len1 - j - 1] - '0') * (nb2[len2 - k - 1] - '0');
			k++;
			j--;
		}
		res[lenres - i - 1] = tot % 10;
		ret = tot / 10;
	}
	return (res);
}




/**
 * printarr - prints an array of int
 *
 * @arr : arraytorpint
 * @lenres : length of the array
 *
 * Return: None
 */
void printarr(int *arr, int lenres)
{
	int i;
	int printzero = 0;

	for (i = 0; i < lenres; i++)
	{
		if (printzero == 1)
			_putchar(arr[i] + '0');
		else if (arr[i] != 0 || i == lenres - 1)
		{
			printzero = 1;
			_putchar(arr[i] + '0');
		}

	}
	_putchar('\n');
}




/**
 * main - multiply 2 arguments passed
 *
 * @argc : standard argc
 * @argv : standard argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int len1, len2, lenres;
	int *res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = findlen(argv[1]);
	len2 = findlen(argv[2]);
	if (len1 == -1 || len2 == -1)
	{
		printf("Error\n");
		exit(98);
	}
	lenres = len1 + len2;

	res = arraymult(argv[1], len1, argv[2], len2, lenres);

	if (res == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	printarr(res, lenres);
	free(res);
	return (0);
}
