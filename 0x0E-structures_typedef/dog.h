#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - a structure type for dog
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
  * my_dog - a new structure for dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: Pointer to new structure for dog or NULL if it fails
  */
struct dog *my_dog(char *name, float age, char*owner)
{
	struct dog *ptr;

	ptr = malloc(sizeof(struct dog));
	if(ptr == NULL)
	{
		return (NULL);
	}

		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;

		return (ptr);
}
