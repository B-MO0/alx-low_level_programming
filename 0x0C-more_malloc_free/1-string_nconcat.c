#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings up to n characters from s2.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of characters from s2 to concatenate.
*
* Return: A pointer to the concatenated string or NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, s1_length = 0, s2_length = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1_length] != '\0')
s1_length++;

while (s2_length < n && s2[s2_length] != '\0')
s2_length++;

str = malloc(s1_length + s2_length + 1);

if (str == NULL)
return (NULL);

for (i = 0; i < s1_length; i++)
str[i] = s1[i];

for (j = 0; j < s2_length; j++)
{
str[i] = s2[j];
i++;
}

str[i] = '\0';

return (str);
}
