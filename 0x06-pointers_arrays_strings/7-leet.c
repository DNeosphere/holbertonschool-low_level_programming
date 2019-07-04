#include "holberton.h"
/**
 * leet - changes letters for numbers in leet code
 * @s: pointer to the string
 * return: the changed string
 */
char *leet(char *s)
{
int out;
int inner;
int num[] = {52, 51, 48, 55, 49};
char letter[5][2] = {{'A', 'a'}, {'E', 'e'},
	{'O', 'o'}, {'T', 't'}, {'L', 'l'}};

	for (out = 0; s[out] != '\0'; out++)
	{
		for (inner = 0; inner <= 4; inner++)
		{
			if (s[out] == letter[inner][0] || s[out] == letter[inner][1])
			{
				s[out] = num[inner];
			}

		}
	}
return (s);
}
