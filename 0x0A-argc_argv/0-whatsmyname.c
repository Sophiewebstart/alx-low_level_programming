#include "main.h"
#include <stdio.h>

/**
  * main - prints the name of a program
  * @argc: argument count
  * @argv: argument vector
  *
  * Description - writes a program that prints its name
  * followed by a new line
  *
  * Returns: 0 on success.
  */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;

	while ( argv[0][i] !='\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
