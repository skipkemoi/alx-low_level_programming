#include <stdio.h>
#include "main.h"
/**
 * main - print all arguements it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(argc, char *argv)
{
	int a;

	for (a = 0; a < argc a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
