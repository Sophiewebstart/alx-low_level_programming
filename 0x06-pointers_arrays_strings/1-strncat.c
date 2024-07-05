#include "main.h"

/**
  * *_strncat - it concatenates two strings using at most n bytes from src
  * @dest: string to be appended to
  * @src: string being appended
  * @n: number of bytes from src being used
  *
  * Description - writes a program that concatenates two strings
  * at most using n bytes from the source string
  * which doesnt need yo be null-terminated if it contains n or more bytes
  * using the *_strncat function
  *
  * Returns: A pointer to the resulting string dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	char *f = dest;

	while (*f != '\0')
	{
		f++;
	}

	while (*src != '\0' && n > 0)
	{
		*f = *src;
		f++;
		src++;
		n--;
	}
	*f = '\0';
	return (dest);
}
