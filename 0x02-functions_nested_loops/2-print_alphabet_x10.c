#include "main.h"

/**
 *main-Entry point for the project
 *
 *Description: Writes a program that prints alphabet in lowercase 10 times
 *using the print_alphabet_x10 function, followed by newline
 *
 *
 * Return: On success 0.
 */

void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar (n);
		}
		_putchar('\n');
	}
}
