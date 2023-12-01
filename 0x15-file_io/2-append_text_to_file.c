#include "main.h"
/**
* _strlen - finds the length of a string
* @str: pointer 
*
* Return: string lenght
*/
size_t _strlen(char *str)
{
size_t i;

for (i = 0; str[i]; i++)
;
return (i);
}

/**
* append_text_to_file - appends a text at the end of a file.
* @filename: file name
* @text_content: NULL 
*
* Return: 1 success , -1 fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t len;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
len = write(fd, text_content, _strlen(text_content));
close(fd);
if (len == -1)
return (-1);
return (1);
}
