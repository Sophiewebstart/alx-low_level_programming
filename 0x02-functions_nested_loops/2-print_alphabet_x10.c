#include "main.h"

/**
 *main-Entry point for the project
 *
 *Description: print_alphabet_x10 - Prints alphabets in lowercase 10 times
 *followed by newline
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
