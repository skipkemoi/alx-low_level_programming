#include <stdio.h>
#include <stdlib.h>
/**
 * main - print combination of two digit
 *
 * Return: 0 (success)
 */
int main(void)
{
	int b 

	for (b = 0; b < 10; b++)
	{
	putchar( 48 +b);
	if (b != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
