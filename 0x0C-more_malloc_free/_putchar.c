#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 * Return: 1 (success) -1 (error)
 */
int _putchar(char c)
	{
	return (write(1, &c, 1));
	}
