#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate in bytes
 * Return: pointer to the allocated memory
 * if malloc fails, the function causes normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
