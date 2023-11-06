#include <stdio.h>
#include "dog.h"

/**
* print_dog print nil if element is null
*@d: pointer to struct
*
*Return: void
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %s\n", d->age ? d->age : "(nil)");
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
