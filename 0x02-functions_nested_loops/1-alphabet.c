#include "main.h"

/**
 * 
 * main- Entry point for the project
 *
 * Description: writes a program that prints the alphabet,in lowercase,followed by a newline
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
