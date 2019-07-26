#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string that separates the strings
 * @n: number of parameters
 * @...: parameters
 */
void print_all(const char * const format, ...)
{
	char *p;
	int a, flag;
	va_list forlist;

	va_start(forlist, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	a = 0;
	while (format[a] != '\0')
	{
		flag = 0;
		switch (format[a])
		{
			case 'c':
				printf("%c", (char)va_arg(forlist, int));
				break;
			case 'i':
				printf("%d", va_arg(forlist, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(forlist, double));
				break;
			case 's':
				p = va_arg(forlist, char*);
					if (p == NULL)
						printf("(nil)");
					printf("%s", p);
				break;
			default:
				flag = 1;
				break;
		}
		if ((flag == 0) && format[a + 1] != '\0')
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(forlist);
}
