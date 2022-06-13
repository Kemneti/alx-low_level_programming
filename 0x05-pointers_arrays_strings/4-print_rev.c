#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: String
 * Return: Nothing
 */
void print_rev(char *s)
{
    int i,n;
    
    
    n=strlen(s);
    
    for(i=n-1;i>=0;i--)
    {
        	 _putchar(s[i]);

	_putchar('\n');
	
       
    }
    
}
