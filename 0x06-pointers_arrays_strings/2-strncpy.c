#include "main.h"

/**
  * *_strncpy - this function copys a string
  * @dest: string to be copied to
  * @src: string being copied
  * @n: number of bytes to be copied
  *
  * Description - writes a program that copies a string
  * using the function *_strncpy
  *
  * Return: dest.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
