#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: The string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; ++length);
	return (length);
}
