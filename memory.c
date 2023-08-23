#include "shell.h"
/**
 * bfree- Release a pointer and set the address to NULL.
 * @ptr: location of the pointer for deallocation.
 * Return: return 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
