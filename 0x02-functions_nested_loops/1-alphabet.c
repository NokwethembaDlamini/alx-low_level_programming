#include "main.h"

/**
 *print_alphabet - function to print alphabets abc
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
