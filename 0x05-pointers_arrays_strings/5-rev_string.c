#include "main.h"

/**
  * rev_string - it reverses a string
  * @s: pointer to the string being reversed
  *
  * Description - writes a program that reverses a string
  * using the function rev_string
  *
  * Return: void.
  */

void rev_string(char *s)
{
	int i;
	int len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i< len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
