#include "main.h"
/**
* _strstr - Locates a substring
* @haystack: String to search within
* @needle: Substring to find
*
* Return: Pointer to the beginning of the located substring, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;
while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}

