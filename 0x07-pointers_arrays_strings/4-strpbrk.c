#include "main.h"
/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: String to be searched
* @accept: String containing characters to search for
*
* Return: always 0
*/
char *_strpbrk(char *s, char *accept)
{
int k, j;
for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
return (s + k);
}
}
return (0);
}

