#include "main.h"

/**
 *infinite_add - c functions that add two numbers
 *@n1: first number to be added
 *@n2: second number to be added
 *@r: store results
 *@size_r: size of a buffer
 *Result: returns pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 *add_strings - adds the number stored in two strings.
 *@n1: the string containing the first number to be added.
 *@n2: the string containing second number to be added.
 *@r: the buffer to store the result.
 *@r_index: the current index of the buffer.
 *
 *Return: if r can store the sum - a pointer to the reult.
 *        if r cannot store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, r_index--)
	{
		num = (*ni - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
