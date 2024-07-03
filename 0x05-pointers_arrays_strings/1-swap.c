#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: pointer to first integer
  * @b: pointer to secont integer
  *
  * Description - writes a program that swaps the value of two integers
  * using the function swap_int
  *
  * Return: on success 0.
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
