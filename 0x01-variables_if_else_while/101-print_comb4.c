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
int nump;
int numh;
int numh2;
for (nump = 48; nump <= 57; nump++)
{
for (numh = nump + 1; numh <= 57; numh++)
{
for (numh2 = numh + 1; numh2 <= 57; numh2++)
{
putchar(nump);
putchar(numh);
putchar(numh2);
if (nump == 55 && numh == 56 && numh2 == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
