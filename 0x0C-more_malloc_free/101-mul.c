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
 * arraymultdigit - multiply an arrays of int by a digit
 *
 * @resdigit : modified array
 * @nb1 : array1
 * @nb2 : digit
 * @dec : place of the digit
 * @lenres : length of all the arrays
 *
 * Return: array of int
 */
int *arraymultdigit(int *resdigit, int *nb1, int nb2, int dec, int lenres)
{
	int i, mul, dig, ret;

	for (i = 0; i < dec ; i++)
		resdigit[lenres - i - 1] = 0;

	ret = 0;
	for (i = 0; i < lenres - dec; i++)
	{
		mul = nb1[lenres - i - 1] * nb2 + ret;
		dig = mul % 10;
		ret = mul / 10;
		resdigit[lenres - dec - i - 1] = dig;
	}
	return (resdigit);
}



/**
 * arrayadd - multiply 2 arrays of int
 *
 * @res1 : array1
 * @res2 : array2
 * @lenres : length of all the arrays
 *
 * Return: array of int
 */
int *arrayadd(int *res1, int *res2, int lenres)
{
	int i, add, dig, ret;

	ret = 0;
	for (i = 0; i < lenres; i++)
	{
		add = res1[lenres - i - 1] + res2[lenres - i - 1] + ret;
		dig = add % 10;
		ret = add / 10;
		res1[lenres - i - 1] = dig;
	}
	return (res1);
}


/**
 * arraymult - multiply 2 arrays of int
 *
 * @nb1 : array1
 * @nb2 : array2
 * @lenres : length of all the arrays
 *
 * Return: array of int
 */
int *arraymult(int *nb1, int *nb2, int lenres)
{
	int i;
	int *res;
	int *resdigit;

	res = malloc(lenres * sizeof(int));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < lenres; i++)
		res[i] = 0;

	resdigit = malloc(lenres * sizeof(int));
	if (resdigit == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < lenres; i++)
	{
		resdigit = arraymultdigit(resdigit, nb1, nb2[lenres - i - 1], i, lenres);
		res = arrayadd(res, resdigit, lenres);
	}

	free(resdigit);
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
	int *nb1, *nb2, *res;

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
	nb1 = strtoarr(argv[1], len1, lenres);
	nb2 = strtoarr(argv[2], len2, lenres);
	if (nb1 == NULL || nb2 == NULL)
	{
		free(nb1);
		free(nb2);
		printf("Error\n");
		exit(98);
	}
	res = arraymult(nb1, nb2, lenres);

	if (res == NULL)
	{
		free(nb1);
		free(nb2);
		printf("Error\n");
		exit(98);
	}
	printarr(res, lenres);
	free(nb1);
	free(nb2);
	free(res);
	return (0);
}
