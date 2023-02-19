#include <stdio.h>
#include <stdlib.h>
/**
 * main - print combination of two digit
 *
 * Return: 0 (success)
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
	putchar(48 + b);
	if (b != 9)
	{
	putchar(',');
	putchar(' ');
	}
	b++;
	}
	putchar('\n');
	return (0);
}
