#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - lists:"we are finally freeeeeee"
*
* @head: pointer
* Return: walo
*/
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head)
}
}
