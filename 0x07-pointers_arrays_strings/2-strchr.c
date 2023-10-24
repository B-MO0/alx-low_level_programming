#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: String to search in
 * @c: Character to find
 *
 * Return: Pointer to the first occurrence of the character c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}

