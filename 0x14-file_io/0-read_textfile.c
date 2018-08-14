#include "holberton.h"


/**
 *read_textfile- reads a text file and prints it to POSIX stdout
 *@filename: pointer to the file to read
 *@letters: the number of chars to read in the file in size_t
 *Return: 0 if file can't be opened, if file is NULL or if write fails
 *        else the number of letters program could read
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDWR);
	char *buf1;
	/*ssize_t x;*/
	int read_s, write_s;

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);

	buf1 = malloc(letters);
	if (!buf1)
		return (0);
	read_s = read(fd, buf1, letters);
	write_s = write(1, buf1, read_s);
	/*x = write(1, buf1, read(fd, buf1, letters));*/
	if (write_s < read_s)
	{
		free(buf1);
		return (0);
	}
	free(buf1);
	close(fd);
	return (write_s);
}
