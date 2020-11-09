#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s : string
 *
 * Return: len of the String
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}



/**
 * create_file - creates a file
 *
 * @filename : name of the text file to create
 * @text_content : content to be added
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, _strlen(text_content));
	if (w == -1)
		return (-1);


	close(fd);
	return (1);

}
