#include <stdio.h>
#include "function_pointers.h"

/**
*print_name - print name normal upercase
*@name: person's name
*@f: fuction pointer
*
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
