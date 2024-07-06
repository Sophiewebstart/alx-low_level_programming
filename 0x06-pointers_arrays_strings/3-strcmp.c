#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  *
  * Description - writes a program that compares two strings
  * using the function _strcmp
  *
  * Return: an integer greater than, equal to, or less than zero
  * accordingly as the string pointed to by s1 is greater than
  * equal to, or less than the string pointed to by s2.
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return 0;
		}
	}
	return s1[i] - s2[i];
}
