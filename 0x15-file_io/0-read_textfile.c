#include "main.h"
#include <stdlib.h>

/**
* readAndPrintFile - Reads a text file and outputs its content to POSIX stdout.
* @file_name: pointer
* @num_letters: The number of letters
*
* Return: always 0
*/
ssize_t readAndPrintFile(const char *file_name, size_t num_letters)
{
ssize_t file_descriptor, bytes_read, bytes_written;
char *file_content_buffer;

if (file_name == NULL)
return (0);

file_content_buffer = malloc(sizeof(char) * num_letters);
if (file_content_buffer == NULL)
return (0);

file_descriptor = open(file_name, O_RDONLY);
bytes_read = read(file_descriptor, file_content_buffer, num_letters);
bytes_written = write(STDOUT_FILENO, file_content_buffer, bytes_read);

if (file_descriptor == -1 || bytes_read == -1 || bytes_written == -1 || bytes_written != bytes_read)
{
free(file_content_buffer);
return (0);
}

free(file_content_buffer);
close(file_descriptor);

return (bytes_written);
}
