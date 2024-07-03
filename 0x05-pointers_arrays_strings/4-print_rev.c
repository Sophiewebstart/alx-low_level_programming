#include "main.h"

/**
  * print_rev - function that prints a string,in reverse
  * followed by a new line
  * @s: pointer to the string being printed in reverse
  *
  * Description - writes a program that prints a string,in reverse
  * using the function print_rev, followed by a new line
  *
  * Return: void.
  */
void print_rev(char *s)
{
	char *str = s;
	int len = 0;
	int i;
	
	while ( *s != '\0')
	{
		s++;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
