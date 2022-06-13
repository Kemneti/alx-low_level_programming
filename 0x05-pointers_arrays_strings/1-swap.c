#include "main.h"
#include <stdio.h>
/**
 * swap_int - Function that swaps the values of two integers
 * @a: An integer to be swaped
 * @b: An integer to be swaped
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int tempnum;

	tempnum = *a;
	*a = *b;
	*b = tempnum;
}
