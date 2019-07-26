#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string that separates the strings
 * @n: number of parameters
 * @...: parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int a;
	char *p;

	va_start(strlist, n);
	for (a = 0; a < n; a++)
	{
		p = va_arg(strlist, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator == NULL || a == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	va_end(strlist);
	printf("\n");
}
