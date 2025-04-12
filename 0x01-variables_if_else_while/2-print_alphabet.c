#include <stdio.h>

/**
 * main - check the code
 *
 * Description: Prints the lowercase alphabet, followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
