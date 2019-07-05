#include "holberton.h"
/**
 * rot13 - encrypts or deencrypts a string into ROT13
 * @s: pointer to the string
 * Return: the encrypted or dencrypted string
 */
char *rot13(char *s)
{
int out;
int inner;
char normie[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (out = 0; s[out] != '\0'; out++)
	{
		for (inner = 0; inner <= 53; inner++)
		{
			if (s[out] == normie[inner])
			{
				s[out] = rot[inner];
				break;
			}
		}
	}
return (s);
}
