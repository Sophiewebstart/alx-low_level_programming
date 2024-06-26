#include "main.h"

/**
 *main-Entry point for the project
 *
 *print_alphabet - Prints alphabets in lowercase followed by newline
 *
 *Description: This function prints the alphabet in lowercase
 *using the function _putchar, followed by a newline
 *
 * Return: On success 0.
 */

void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar (n);
		n++;
	}
	_putchar('\n');
}
