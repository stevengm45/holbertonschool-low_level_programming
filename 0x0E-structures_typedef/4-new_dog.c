#include "dog.h"




dog_t *new_dog(char *name, float age, char *owner)
{
  struct dog_t *dog;
  dog = malloc(sizeof(struc dog_t));

  dog->name =name;
    dog->age = age;
    dog->owner = owner;
}
