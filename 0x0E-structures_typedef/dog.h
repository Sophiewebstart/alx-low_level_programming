#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
  * my_dog - creats a new structure for dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: Pointer to new structure for dog or NULL if it fails
  */
struct dog *my_dog(char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		return (NULL);
	}

		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;

		return (ptr);
}
#endif /* DOG_H */
