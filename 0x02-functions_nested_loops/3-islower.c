#include "main.h"

/**
 *main-Entry point for the project
 *
 *Description: Writes a program that checks for lowercase character
 *using _islower function
 *
 * @c: Character to check
 * Return: On success 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
