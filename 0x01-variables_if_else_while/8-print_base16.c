#include <stdio.h>
/**
 * main - print hexadecimal number of base 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int I;
	char alp[6] = "abcdef";

	for (i = 0; i < 6; i++)
	{
	putchar((i % 10) + '0');
	}
	for (I = 0; I < 6; I++)
	{
	putchar(alp[I]);
	}
	putchar('\n');
	return (0);
}
