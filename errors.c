#include "shell.h"

/**
 * _eputs- outputs a provided input string.
 * @str: the text that is intended for printing.
 * Return: Alway 0.
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}
/**
 * _eputchar- outputs the character c to the standard error stream.
 * @c: The character for display.
 * Return: On success 1.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
/**
 * _putfd- Records the character 'c' to the provided file descriptor (fd).
 * @c: character for output.
 * @fd: The descriptor for writing to the file.
 * Return: On success 1.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd- outputs a provided input string.
 * @str: the text that needs to be displayed.
 * @fd: The descriptor for writing to the file.
 * Return: the quantity of characters entered.
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
