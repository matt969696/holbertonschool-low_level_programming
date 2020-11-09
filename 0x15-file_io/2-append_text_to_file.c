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
 * append_text_to_file - appends text to file
 *
 * @filename : name of the text file to append
 * @text_content : content to be added
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, _strlen(text_content));
	if (w == -1)
		return (-1);


	close(fd);
	return (1);

}
