#include <stdio.h>
#include "main.h"
/**
 * main - prints the no of arguments passed into it
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 (success)
 */
int main(argc, char *argv[])
{
	(void)argv
		printf("the number of argument passed is %d\n", argc - 1);
	return (0);
}
