#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ralpha;
for (ralpha = 'z'; ralpha >= 'a'; ralpha--)
{
putchar(ralpha);
}
putchar('\n');
return (0);
}
