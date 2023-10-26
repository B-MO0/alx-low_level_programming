#include "main.h"

/**
* wildcmp - Compare strings with wildcards
* @s1: first string
* @s2: second string with wildcards
* Return: 1 if the strings match, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
return (wildcmp(s1, s2 + 1));
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}

