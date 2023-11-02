#include "main.h"
/**
**malloc_checked - allocate memory using malloc, exit if error 98
*@b: int
*Return: pointer to the array initialized or NULL.
*/
void *malloc_checked(unsigned int b);
{
int *m = malloc(b);
if (m == 0)
exit (98);
return (m);
}
