#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
char rightHalf[100];
int length, mid, i, k;

length = strlen(str);

mid = length/2;

leftHalf[i] = '\0';
for(i = mid, k = 0; i <= length; i++, k++) {
rightHalf[k]= str[i];
}
if (i % 2 == 0)
for ((i = (length - 1) / 2); str[i] != 0; i++)
_putchar(str[i]);

_putchar('\n');


}
