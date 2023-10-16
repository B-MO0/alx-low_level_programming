#include "main.h"

/**
 * rev_string - Reverses a string
 * @s:string
 * Return: reversed String
 */

void rev_string(char *s)
{
char rev = s[0];
int position = 0;
int i;

while (s[position] != '\0')
position++;
for (i = 0; i < position; i++)
{
position--;
rev = s[i];
s[i] = s[position];
s[position] = rev;
}
}