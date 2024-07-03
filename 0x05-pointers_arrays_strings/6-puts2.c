#include "main.h"

/**
  * puts2 - it prints every other character of a string
  * starting with the first character, followed by a new line
  * @str: pointer to the string being printrd
  *
  * Description - writes a program that prints every other character
  * of a string,starting with the first character
  * using the function puts2, followed by a new line
  *
  * Return: void.
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
