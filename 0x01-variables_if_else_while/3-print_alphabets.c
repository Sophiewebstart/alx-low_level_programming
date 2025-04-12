#include <stdio.h>

/**
 * main - check the code
 *
 * Description: Prints the alphabet in lowercase
 * then uppercase followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
