#include "holberton.h"
/**
 * cap_string - replaces a lowercase word in a string after signs or spaces
 * @s: pointer to the string
 * Return: the string
 */
char *cap_string(char *s)
{
int a;
int flag;
flag = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
	if (s[a] == ',' || s[a] == ';' || s[a] == '.' || s[a] == '!' ||
		s[a] == '?' || s[a] == '"' ||
		s[a] == '(' || s[a] == ')' || s[a] == '{' || s[a] == '}' ||
		s[a] == ' ' || s[a] == '\t' || s[a] == '\n')
		{
		flag = 1;
		}
	else if ((flag == 1 && s[a] >= 97 && s[a] <= 122) ||
	(s[0] >= 97 && s[0] <= 122))
		{
		s[a] -= 32;
		flag = 0;
		}
	else
		{
		flag = 0;
		}
	}
return (s);
}
