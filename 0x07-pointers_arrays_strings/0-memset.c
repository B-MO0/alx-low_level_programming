#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte to be set
 * @n: The number of bytes to be filled
 *
 * Return: Pointer to the filled memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}

