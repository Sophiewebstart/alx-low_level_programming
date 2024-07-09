#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: string to be searched
  * @c: character to be searched for
  *
  * Description - writes a program that locates a character in a string
  * using the function _strchr
  *
  * Return: a pointer to the first occurence of the character c
  * in a string, or NULL if the character is not found.
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
