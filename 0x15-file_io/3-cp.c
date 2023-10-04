#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - function to copy the content of a file to another file
 *
 * @ar: parameter that point to integer
 *
 * @arv: parameter that point to char
 *
 * Return: will be zero
 */

int main(int ar, char *arv[])
{
	int fd_from, fd_to;
	char buff[BUFFER_SIZE];
	ssize_t b_read, b_write;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ar != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(arv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", arv[1]);
		exit(98);
	}
	fd_to = open(arv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", arv[2]);
		exit(99);
	}
	while ((b_read = read(fd_from, buff, BUFFER_SIZE)) > 0)
	{
		b_write = write(fd_to, buff, b_read);
		if (b_write != b_read)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", arv[2]);
			exit(99);
		}
	}
	if (b_read == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", arv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
