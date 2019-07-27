#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with a separtor string
 * @separator: string to separate numbers
 * @n: number of parameters
 * @...: parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nslist;
	unsigned int a;

	va_start(nslist, n);
	for (a = 0; a < n;  a++)
	{
		if (separator == NULL || a == n - 1)
			printf("%d", va_arg(nslist, int));
		else
		printf("%d%s", va_arg(nslist, int), separator);
	}
	va_end(nslist);
	printf("\n");
}
