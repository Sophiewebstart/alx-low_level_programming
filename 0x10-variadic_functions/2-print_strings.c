#include <unistd.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - this prints strings followed by a newline
  * @separator: string to be printed between the strings
  * @n: number of strings passed to a function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list print_str;

	va_start(print_str, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(print_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_str);
}
