#ifndef DOG_H
#define DOG_H

/**
  * struct dog - a structure representing a dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif /* DOG_H */
