#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - add a new node
* @head: double pointer
* @n: value of new node
*
* Return: pointer to the new node, or NULL on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
*head = new;
if (new->next != NULL)
(new->next)->prev = new;
return (new);
}
