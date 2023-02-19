#include <stdio.h>
/**
 * main - alphabet in lower case, lower case in new line
 *
 * Return: 0 (success)
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;
	int I;

	for (i = 0; i < 26; i++)
	{
	putchar(alp[i]);
	}
	for (I = 0; I < 26; I++)
	{
	putchar(ALP[I]);
	}
	putchar('\n');
	return (0);
}
