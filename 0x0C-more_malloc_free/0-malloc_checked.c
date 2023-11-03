#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mallock_checked - alocates memory using malloc
 * @b: size of memory
 * Return: pointer to the new allocated
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
