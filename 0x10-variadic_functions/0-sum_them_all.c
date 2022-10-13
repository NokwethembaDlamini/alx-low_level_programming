#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: number of arguments to be summed.
 *
 *Return: sum or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list args;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}
		va_end(args);
		return (sum);
	}

	return (0);
}
