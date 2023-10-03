#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function to read a text file and prints
 * it to the POSIX standard output
 *
 * @filename: parameter point to const char
 *
 * @letters: parameter to identify size_t
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t b_read, b_write;

	if (filename == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (0);
	}
	b_read = read(fd, buff, letters);
	if (b_read == -1)
	{
		return (0);
	}
	close(fd);
	b_write = write(STDOUT_FILENO, buff, b_read);
	if (b_write == -1 || b_write != b_read)
	{
		return (0);
	}
	free(buff);
	return (b_write);
}
