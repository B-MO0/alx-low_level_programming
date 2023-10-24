#include "main.h"
/**
* _strchr - Locates a character in a string
* @s: String to search in
* @c: Character to find
*
* Return: always 0
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

