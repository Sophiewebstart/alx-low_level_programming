#include <stdio.h>
#include <stdlib.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

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
