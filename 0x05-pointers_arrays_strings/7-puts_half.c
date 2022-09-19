#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts_half - prints half of a string
 *@str: parameter string
 */
void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	putchar('\n');
}
