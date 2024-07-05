#include "main.h"

/**
  * *_strcat - this function concentrates two strings
  * @dest: string to be appended to
  * @src: string being appended
  *
  * Description - writs a program that appends the src string
  * to the dest string, overwriting the terminating null byte
  * at the end of dest, using the function *_strcat
  * and then adds a terminating null byte
  *
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}

	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}

	*d = '\0';
	return (dest);
}
