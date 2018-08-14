#include "holberton.h"

/**
 *create_file- creates a file
 *@filename: name of file to be made
 *@text_content- the text to add to file
 *Return: 1 on success -1 on fail
 */


int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_RDWR, 0600);
	char *buf1;

	if (fd == -1)
		return (-1);
	buf1 = malloc(sizeof(text_content));

	if (!buf1)
		return (-1);
	if (filename == NULL)
	{
		free(buf1);
		return (-1);
	}

	write(fd, buf1, sizeof(text_content));

	free(buf1);
	close(fd);
	return (1);
}
