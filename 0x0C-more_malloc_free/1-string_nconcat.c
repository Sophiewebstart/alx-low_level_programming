#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - this function concatenates two strings
  * @s1: string one
  * @s2: string two
  * @n: number of bytes to concatenate from s2
  *
  * Description - writes a program that concatenates two strings
  * If the function fails, it should return NULL
  * If n is greater than or equal to the length of s2, then entire s2 is used
  * The returned pointer will point to a newly allocated space in memory
  * Which contains s1, followed by n bytes of s2, and null terminated
  * If NULL is passed, treat as empty string
  *
  * Return: pointer to concatenated string or Null on failure
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i, k, length1, length2;

	while (s1 && s1[length1])
	{
		length1++;
	}

	while (s2 && s2[length2])
	{
		length2++;
	}

	if (n >= length2)
	{
		n = length2;
	}

	new_string = malloc(length1 + n + 1);
	if (new_string == NULL)
	{
		return NULL;
	}
	
	for (i = 0; i < length1; i++)
	{
		new_string[i] = s1[i];
	}

	for (k = 0; k < n; k++)
	{
		new_string[length1 + k] = s2[k];
	}

	new_string[length1 + k] = '\0';

	return new_string;
}
