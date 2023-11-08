#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - does something
*@array: list
*@size: size of list
*@action: function pointer
*
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int));
{
int *end = array + size - 1;
if (array && size && action)
while (array <= end)
action(*array++);
}
