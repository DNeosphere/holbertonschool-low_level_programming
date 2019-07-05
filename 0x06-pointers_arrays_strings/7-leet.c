#include "holberton.h"
/**
 * leet - changes letters for numbers in leet code
 * @s: pointer to the string
 * Return: the changed string
 */
char *leet(char *s)
{
int inner;
int out;
char letter[] = "AaEeOoTtLl";
char num[] = "4433007711";
	for(out = 0; s[out] != '\0'; out++)
	{
		for (inner = 0; inner <= 10; inner++)
		{
			if (s[out] == letter[inner])
			{
				s[out] = num[inner];
			}
		}
	}
return (s);
}
