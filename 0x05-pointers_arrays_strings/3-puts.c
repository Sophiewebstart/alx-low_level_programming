#include "main.h"

/**
  * _puts - prints a string, followed by a new line, to stdout
  * @str: pointer to the string being printed
  *
  * Description - writes a program that prints a string
  * using the function _puts, followed by a new line, to stdout
  *
  *Return: void.
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
