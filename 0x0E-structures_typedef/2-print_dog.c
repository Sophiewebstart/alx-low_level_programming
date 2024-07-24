#include <stdio.h>
#include "dog.h"

/**
  * print_dog - this function prints the elements of struct dog
  * @d: pointer to the struct dog to be printed
  *
  * Description - writes a program that prints struct dog using the function
  * print_dog, if an element of d is NULL, print (nil) instead of the element
  * if name is NULL, print Name: (nil), if d is NULL print nothing.
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner:%s\n", d->owner);
	}
}
