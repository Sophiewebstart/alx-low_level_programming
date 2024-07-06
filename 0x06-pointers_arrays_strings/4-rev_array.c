#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @n: number of elements in the array
  * @a: array of integers
  *
  * Description - writes a program that reverses the content
  * of an array of integers using the function reverse_array
  *
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
