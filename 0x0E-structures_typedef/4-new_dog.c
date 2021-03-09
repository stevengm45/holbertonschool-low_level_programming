#include "dog.h"
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
}
