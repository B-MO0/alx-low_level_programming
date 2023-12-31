#include "dog.h"
#include <stdlib.h>

/**
*_strlen - lenght of str
*@str: string
*
*Return: length of str
*/
int _strlen(const char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}
/**
**_strcopy - copy string
*@dest:destination
*@src:source of data
*Return:data in destination
*/
char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
**new_dog - creates new dog
*dog_t - dog structure
*@name:name of dog
*@age:age of dog
*@owner:owner of dog
*Return: new odg or null
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
