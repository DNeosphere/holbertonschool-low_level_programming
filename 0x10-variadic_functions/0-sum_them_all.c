#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * @...: parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nlist;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);
	va_start(nlist, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(nlist, int);
	}
	va_end(nlist);
	return (sum);
}

