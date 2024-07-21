#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array using malloc
  * @nmemb: number of elements
  * @size: size of elements
  *
  * Description - writes a program that allocates memory for an array of
  * nmemb elements of size bytes each. The memory is set to zero
  * If nmemb or size is 0, then function returns NULL
  * If malloc fails, then function returns NULL
  *
  * Return: pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}
	
	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
	{
		return NULL;
	}

	for (i = 0; i< total; i++)
		((char *)ptr)[i] = 0;

	return ptr;
}
