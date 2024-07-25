#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - this function executes a function given as a
  * parameter on each element of an array
  * @size: size of the array
  * @action: pointer to the function to be used
  *
  * Description - writes a program that executes a function given as a
  * parameter on each element of an array using the function array_iterator
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
