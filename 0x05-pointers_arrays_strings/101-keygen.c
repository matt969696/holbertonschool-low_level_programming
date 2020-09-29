#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- generate a password
 *
 * Return: Always 0
 */
int main()
{
	int i = 0;
	char passwd[100];
	int checksum = 0;
	int ale;

	srand(time(0));

	while (checksum < 2772 - 123)
	{
		ale = rand() % 123;
		if ((ale >= 48 && ale <= 91) || ale >= 97)
		{
			passwd[i] = ale;
			checksum += ale;
			i++;
		}
	}

	/* printf("First pass %s\n",passwd); */
	/* printf("Checksum %i\n", checksum); */
	/* printf("i %i\n", i); */


	passwd[i] = 2772 - checksum;

	/* printf("First pass %s\n",passwd); */
	/* printf("Checksum %i\n", checksum); */
	/* printf("i %i\n", i); */


	passwd[i+1] = '\0';

	/* i = 0; */
	/* checksum = 0; */
	/* while (passwd[i] != '\0') */
	/* { */
	/* 	checksum += passwd[i]; */
	/* } */
	/* printf("checksum %i", checksum); */

	printf("%s",passwd);
	return(0);
}
