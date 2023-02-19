#include <stdio.h>
/**
 * main - print single digit base 10 numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int numb;

	for (number = 0; numb < 10; numb++)
	{
	putchar((numb % 10) + '0');
	}
	putchar('\n');
	return (0);
}
