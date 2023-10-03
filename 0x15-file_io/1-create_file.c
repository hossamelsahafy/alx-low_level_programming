#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function to create a file
 *
 * @filename: parameter that point to const char
 *
 * @text_content: parameter that point to char
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”)
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t l = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while  (text_content[l] != '\0')
		{
			l++;
		}
		if (write(fp, text_content, l) == -1)
		{
			close(fp);
			return (-1);
		}
		else
		{
			if (write(fp, "", 0) == -1)
			{
				close(fp);
				return (-1);
			}
		}
	}
	close(fp);
	return (1);
}
