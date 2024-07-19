#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - this function allocates a memory using malloc
  * @p: pointer to the allocated memory
  * @b: number of allocated bytes
  *
  * Description - writes a program that allocates memory using malloc
  * if malloc fails, the function malloc_checked should cause normal
  * process termination with a ststus value of 98
  *
  * Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	
	if (p == NULL)
	{
		exit(98);
	}
	
	return (p);
}
