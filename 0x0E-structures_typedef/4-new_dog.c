#include "dog.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>


dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *dognew;
  int i, j;

  for(i = 0; name[i] != '\0'; i++)
    {
    }

  for(j = 0; owner[j] != '\0'; j++)
    {
    }

  dognew = malloc(sizeof(dog_t));
  dognew->name = malloc((i + 1) * sizeof(char));
  dognew->owner = malloc((j + i) * sizeof(char));

  for (i = 0; name[i] != '\0'; i++)
    dognew->name[i] = name[i];
  dognew->name[i] = '\0';

  for (j = 0; name[j] != '\0'; j++)
    dognew->owner[j] = owner[i];
  dognew->owner[j] = owner[j];

  if (dognew == NULL)
    return (NULL);

  dognew->age = age;
  return (dognew);
=======




dog_t *new_dog(char *name, float age, char *owner)
{
  struct dog_t *dog;
  dog = malloc(sizeof(struc dog_t));

  dog->name =name;
    dog->age = age;
    dog->owner = owner;
>>>>>>> cb610bcb1ab96b21494d0a2b1f3c616f6f3b6df9
}
