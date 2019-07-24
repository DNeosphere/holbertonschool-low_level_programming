#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
void array_iterator(int *array, unsigned int size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
#endif /* FUNCTION_POINTERS_H */
