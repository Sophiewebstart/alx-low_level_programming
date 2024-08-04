#include <unistd.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - this prints numbers followed by a newline
  * @separator: string to be printed between numbers
  * @n: number of integers passed to a function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_num;

	va_start(print_num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_num, unsigned int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_num);
}
