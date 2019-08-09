#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
int get_endianness(void);
unsigned int binary_to_uint(const char *b);
int clear_bit(unsigned long int *n, unsigned int index);
int _strlen(const char *s);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _pow_recursion(int x, int y);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
#endif /* HOLBERTON_H */
