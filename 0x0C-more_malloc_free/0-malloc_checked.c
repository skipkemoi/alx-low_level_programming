#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked(unsigned int b) - allocate memory using malloc
 * @b: bytes to be allocated
 * Return: pointer to adress (success), 98 (fail)
 */
void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
