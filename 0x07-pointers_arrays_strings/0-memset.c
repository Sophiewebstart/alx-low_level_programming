#include "main.h"

/**
  * *_memset - this function fills the first n bytes of the memory
  * area poined to by s with the constant byte b
  * @s: pointer to memory area
  * @b: constant byte
  * @n: number of bytes to be filled
  *
  * Description - writes a program that fills the first n bytes
  * of the memory area pointed to by s with the constant byte b
  * using the function _memset
  *
  * Return: a pointer to the memory area s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
