#include "lists.h"

/**
* sum_dlistint - sums of data
* @head: pointer
*
* Return: sum of all data, or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
