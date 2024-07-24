#ifndef DOGS_H
#define DOGS_H

/**
  *struct dog - a structure representing a dog
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOGS_H */
