#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - new dog user
 *@name: pointer to dog´s name
 *@age: variable with dog´s age
 *@owner: pointer to owner´s name
 *Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dognew;
int i, j;

for (i = 0; name[i] != '\0'; i++)
{
}
for (j = 0; owner[j] != '\0'; j++)
{
}

dognew = malloc(sizeof(dog_t));
dognew->name = malloc((i + 1) * sizeof(char));
dognew->owner = malloc((j + 1) * sizeof(char));

for (i = 0; name[i] != '\0'; i++)
dognew->name[i] = name[i];
dognew->name[i] = '\0';

for (j = 0; owner[j] != '\0'; j++)
dognew->owner[j] = owner[j];
dognew->owner[j] = '\0';

if (dognew == NULL)
return (NULL);
dognew->age = age;
/**
if ((dognew == NULL) || (dognew->name == NULL) || (dognew->owner == NULL)
{
free(dognew->name);
free(dognew->owner);
free(dognew);
return (NULL);
}
*/
return (dognew);
}
