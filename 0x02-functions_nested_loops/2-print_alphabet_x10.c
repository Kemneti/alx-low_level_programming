#include "main.h"

/**
 * print_alphabet_x10 - Check main.h
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
<<<<<<< HEAD
		_putchar('\n'); 
 	}
=======
		_putchar('\n');
	}
>>>>>>> 5760d3812a6be0a788fcc711e7eebb8a2ae549c7
}