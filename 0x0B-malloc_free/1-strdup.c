#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: the char
 * Return: 0 (success) NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *shady;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	shady = malloc(sizeof(char) * (i + 1));
	if (shady == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		shady[r] = str[r];
	return (shady);
}
