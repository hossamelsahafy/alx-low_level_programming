#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - function to append text at the end of a file
 *
 * @filename: parameter point to const char
 *
 * @text_content: parameter point to char
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t l = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[l] != '\0')
		{
			l++;
		}
		if (write(fp, text_content, l) == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
