#include "monty.h"

/**
 * buffer_alloc - a fuction that allocates heap memory
 * @size: int
 * Return: char *
 */
void *buffer_alloc(int size)
{
	static void *buffer;

	buffer = malloc(size);
	if (!buffer)
		return (NULL);
	memset(buffer, '\0', size);
	return (buffer);
}

/**
 * __free - a function that frees up some memory space
 *
 * @ptr: void **
 * Return: void
 */
void __free(void **ptr)
{
	if (*ptr != NULL && ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
