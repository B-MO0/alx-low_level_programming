#include "lists.h"

/**
* dlistint_len - count the number of nodes
* @h: pointer
*
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
