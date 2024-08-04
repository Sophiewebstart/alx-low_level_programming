#include <unistd.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums up all parameters
  * @n: number of argument to be passed
  *
  * Return: sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int my_sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			my_sum += va_arg(args, const unsigned int);
		}
	}

	va_end(args);

	return (my_sum);
}
