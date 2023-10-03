#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	ssize_t n_read = 0;
	ssize_t n_write = 0;
	char *buff;
	FILE *fp;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL || filename == NULL)
	{
		return (-1);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	n_read = fread(buff, sizeof(char), letters, fp);
	fclose(fp);
	if (n_read == 0)
	{
		return (0);
	}
	n_write = fwrite(buff, sizeof(char), n_read, stdout);
	free(buff);
	if (n_write != n_read)
	{
		return (0);
	}
	return (n_read);
}
