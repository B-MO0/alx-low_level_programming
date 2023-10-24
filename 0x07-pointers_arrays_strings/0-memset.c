include "main.h"
/**
*_memset- main proto
*@n:Function parap
*@s:Function param
*@b:memory value
*return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
