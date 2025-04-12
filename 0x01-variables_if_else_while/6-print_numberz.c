#include <stdio.h>

/**
 * main - check the code
 *
 * Description: Prints all single-digit numbers of base 10 from 0
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int numz = 0;

	while (numz < 10)
	{
		putchar(numz + 48);
		numz++;
	}

	putchar('\n');

	return (0);
}
