#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *r = needle;

		while (*l == *r && *r != '\0')
		{
			l++;
			r++;
		}

		if (*r == '\0')
			return (haystack);
	}

	return (0);
}
