#include <stdio.h>
#include "dog.h"

/**
  * init_dog - this function initializes a variable of type struct dog
  * @d: pointer to the variable to be initialized
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Description - writes a program that initializes a variable of type
  * struct dog using the function init_dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
