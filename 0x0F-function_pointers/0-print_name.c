#include "function_pointers.h"
#include "stdlib.h"
/**
 * print_name - uses a pointer to function to print name in various cases
 * @name: pointer to the string cointaining the name
 * @f: pointer to the functions
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
