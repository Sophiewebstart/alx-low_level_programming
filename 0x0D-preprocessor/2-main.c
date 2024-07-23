#include <stdio.h>

/**
  * main - writes a program that prints the name of the file
  * it was compiled from, followed by a new line
  *
  * Return: Always 0
  */

int main(void)
{
	char *filename = __FILE__;
	int i = 0 ;

	while (filename[i] != '\0')
	{
		putchar(filename[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
