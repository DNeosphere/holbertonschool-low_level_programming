#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints char, integer, float and string format
 * @format: array with the initial letter of the format to print
 * @...: parameters
 */
void print_all(const char * const format, ...)
{
	char *p;
	int a = 0;
	va_list forlist;

	va_start(forlist, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[a] != '\0')
	{
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
					if (p != NULL)
					{
						printf("%s", p);
						break;
					}
					printf("(nil)");
					break;
		}
		if ((format[a] == 'c' || format[a] == 'i' || format[a] == 'f'
		|| format[a] == 's')  && format[a + 1] != '\0')
			printf(", ");
		a++;
	}
	printf("\n"), va_end(forlist);
}
