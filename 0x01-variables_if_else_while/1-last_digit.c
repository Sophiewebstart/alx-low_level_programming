#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check the code
 * last_digit - this prints the last digit of the alphabet
 *
 * Description: Assigns a random number to variable n each time it runs,
 * then prints the last digit of n stored in the variable n.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
