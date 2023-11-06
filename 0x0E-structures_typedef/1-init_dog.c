#include "dog.h"
/**
*init_dog - initialize the dog
*@d: struct ptr
*@name: dogo name
*@age: dogo age
*@owner: dogo dogo
*
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->owner = owner;
d->age = age;
}
}
