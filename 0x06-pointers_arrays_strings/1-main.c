#include "holberton.h"
#include <stdio.h>

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
   char s1[98] = "Alles hat ein Ende ";
   char s2[] = "nur die Wurst hat zwei\n";
   char *p;

   printf("%s\n", s1);
   printf("%s", s2);
   p = _strncat(s1, s2, 2);
   printf("%s\n", s1);
   printf("%s", s2);
   printf("%s\n", p);
   p = _strncat(s1, s2, 1024);
   printf("%s", s1);
   printf("%s", s2);
   printf("%s", p);
   return (0);
}

