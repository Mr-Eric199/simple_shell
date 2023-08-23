#include "shell.h"
/**
 * _memset- loads memory with a uniform byte.
 * @s: the reference to the region of memory.
 * @b: the byte intended for populating the *s.
 * @n: the quantity of bytes requiring completion.
 * Return: a reference to the memory region represented by s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * ffree- to free a string of strings.
 * @pp: the string of strings.
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
/**
 * _realloc- to reallocates a block of memory.
 * @ptr: pointer to the previous malloc'ated block.
 * @old_size: byte size of the previous block.
 * @new_size: byte size of the new block.
 * Return: return pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);
	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
