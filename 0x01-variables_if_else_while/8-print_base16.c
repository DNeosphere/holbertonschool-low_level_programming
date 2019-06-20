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
int hexanum;
char hexaalph;
for (hexanum = 48; hexanum  <= 57; hexanum++)
{
putchar(hexanum);
}
for (hexaalph = 'a'; hexaalph <= 'f'; hexaalph++)
{
putchar(hexaalph);
}
putchar('\n');
return (0);
}
