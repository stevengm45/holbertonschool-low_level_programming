#ifndef FILEDOG
#define FILEDOG
<<<<<<< HEAD


struct dog
{
  char *name;
  float age;
  char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
=======
/**
 *struct dog - structure dog
 *@name: pointer to variable for dog´s name
 *@age: variable float for dog´ age
 *@owner: pointer to variable for dog´s owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
>>>>>>> cb610bcb1ab96b21494d0a2b1f3c616f6f3b6df9

#endif
