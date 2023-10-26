#include "main.h"
/**
* _strlen_recursion - Returns the length of a string recursively.
* @s: The string to calculate the length of.
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
int lnt = 0;
if (*s)
{
lnt++;
lnt += _strlen_recursion(s + 1);
}
return (lnt);
}

