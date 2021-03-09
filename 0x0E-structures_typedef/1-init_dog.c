#include "dog.h"
/**
 * init_dog - Funtion that initialize a variable of type structu dog
 * @d: Adress of struct dof
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner of the dog.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
<<<<<<< HEAD
if(d != 0)
=======
if (d != 0)
>>>>>>> cb610bcb1ab96b21494d0a2b1f3c616f6f3b6df9
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
