#include "main.h"
#include <stdio.h>

/**
 *puts2 - prints every character
 @str: string
 *Description: a fuction that prints every other characters
 *Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
