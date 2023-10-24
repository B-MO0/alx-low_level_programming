#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
