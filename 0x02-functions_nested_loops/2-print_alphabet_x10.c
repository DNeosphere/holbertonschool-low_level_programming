#include "holberton.h"
/**
 * print_alphabet - writes the alphabet 10 times adn
 *
 *
 *
 */
void print_alphabet_x10(void)
{
int tentimes;
char alpha;
for (tentimes = 0; tentimes <= 10; tentimes++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
