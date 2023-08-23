#include "shell.h"
/**
 **_strncpy- reproduces a sequence of characters.
 *@dest: the target string for the purpose of copying.
 *@src: the original text.
 *@n: the quantity of characters eligible for replication.
 *Return: the combined sequence of characters.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}
/**
 **_strncat- combines two strings together.
 *@dest: the initial sequence.
 *@src: the alternate sequence.
 *@n: the maximum utilization of bytes.
 *Return: the combined sequence of characters.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr- identifies the position of a character within a string.
 *@s: the text that requires parsing.
 *@c: the specific attribute to seek out.
 *Return: t(s) refers to a memory region pointed to by s.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	return (NULL);
}
