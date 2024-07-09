#include "main.h"

/**
  * _memcpy - copies n bytes from memory area src to memory area dest
  * @dest: memory area being copied to
  * @src: memory area being copied
  * @n: number of bytes to be copied 
  *
  * Description - writes a program that copies n bytes from memory area
  * src to memory area dest using the function _memcpy
  *
  * Return: a pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; n > r; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
