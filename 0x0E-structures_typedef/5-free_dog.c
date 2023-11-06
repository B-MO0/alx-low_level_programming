#include "dog.h"
#include <stdlib.h>

/**
* free_dog - freedom for the dags
*@d: ptr structure dog
*
*Return: void
*/
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
free(d->name);
if (d->age)
free(d->age)
if (d->owner)
free(d->owner);
free(d);
}
}
