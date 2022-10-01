#include "main.h"
#include <stdlib.h>

/**
* _strchr - string character
* @s: string given
* @c: another char
* Return: a string
*/
char *_strchr(char *s, char c)
{
	int a;

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0' )
		return (s);

	return (NULL);
}
