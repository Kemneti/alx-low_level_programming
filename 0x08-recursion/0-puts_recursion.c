#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: An input string to printing
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	unsigned int index = 0;

	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[index]);
	_puts_recursion(s + 1);
}
