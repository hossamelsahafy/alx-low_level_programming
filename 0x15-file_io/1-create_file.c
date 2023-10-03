#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/stat.h>

int create_file(const char *filename, char *text_content)
{
    FILE *fp;
    int n;

    if (filename == NULL)
    {
        return (-1);
    }
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        return (-1);
    }
    chmod(filename, 0600);
    if (text_content == NULL)
    {
        fclose(fp);
        return (1);
    }
    n = fprintf(fp, "%s", text_content);
    if (n < 0)
    {
        fclose(fp);
        return (-1);
    }
    fclose(fp);
    return (1);
}